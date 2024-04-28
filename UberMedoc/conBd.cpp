#include "conbd.h"
#include <iostream>
//On a déclaré dans le header db comme varibale ETERNE.
QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");

bool connexionBD() {
    db.setHostName("127.0.0.1");
    db.setDatabaseName("ubermedoc");
    db.setUserName("root");
    db.setPassword("");

    if (db.open()) {
        std::cout << "Connexion reussie" << std::endl;
        return true;
    } else {
        std::cerr << "Connexion echouee : " << db.lastError().text().toStdString() << std::endl;
        return false;
    }
}
