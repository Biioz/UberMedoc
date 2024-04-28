#include "mainwindow.h"
#include "client.h"
#include "utilisateur.h"
#include "administrateur.h"
#include "client.h"
#include "medicament.h"
#include "commande.h"
#include "conBd.h"
#include <QtSql/QSqlQuery>
#include <QApplication>
#include "DAOutilisateur.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    /*

    //On créer des medocs
    Medicament dolipranne(1, "Dolipranne", 8.5);
    Medicament strepsile(2, "Strepsile", 5.5);
    dolipranne.afficherDetails();//test affichage d'un medoc

    //Création d'un client
    Client april("April", "Dufey", "11 allee Guy Charff", "april.dufey@gmail.com", "ad11");
    april.afficherDetails();//test affichage client(plymorphisme pour la methode d'affichage d'un utilisateur)
                            //ici panier vide et solde par défault à 0€


    april.ajouterAuPanier(&dolipranne);
    april.ajouterAuPanier(&strepsile);
    april.ajouterSolde(50.8);
    april.afficherDetails();// on test encore avec des articles dans le panier et un solde

    //Création d'une commande, pensé pour le faire à partir d'un client comme
    //ça juste à récup son panier et le prix du panier (attribut totalPanier)
    Commande com(&april);
    com.afficherDetails();

    */
    connexionBD();

    QSqlQuery query(db);

    // Requête TEST SQL
    if (query.exec("SELECT * FROM utilisateur")) {
        // On parcours la requête
        while (query.next()) {
            QVariant id = query.value(0);
            QVariant nom = query.value(1);
            QVariant prenom = query.value(2);

            // On affiche le résultat
            std::cout << "ID: " << id.toInt() << ", Nom: " << nom.toString().toStdString()
                      << ", Prenom: " << prenom.toString().toStdString() << std::endl;
        }
    } else {
        // Si la requête a échoué on retourne un message d'erreur
        std::cerr << "La requête SQL a échoué : " << query.lastError().text().toStdString() << std::endl;
    }

    DAOutilisateur rqClient ;

    Utilisateur* util = rqClient.connexionUtilisateur("benoit.benoit@gmail.com", "coucou", db);

    if (util != nullptr) {
        if (Client* client = dynamic_cast<Client*>(util)) {
            client->afficherDetails();
        } else if (Administrateur* admin = dynamic_cast<Administrateur*>(util)){
            admin->afficherDetails() ;
        }
        else{
            cout<<"N'est pas de type administrateur ou client"<<endl ;
        }
    } else {
        cout << "Aucun utilisateur trouvé" << endl;
    }


    rqClient.inscriptionUtilisateur("Gabriel","Delemasure","Rue des beaux gosses","gabriel@leboss","coucou",db);


    return a.exec();
}
