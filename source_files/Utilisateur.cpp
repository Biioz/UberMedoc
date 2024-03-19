#include <iostream>
using namespace std;

Utilisateur::Utilisateur(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU){
    nom = nomU;
    prenom = prenomU;
    adresse = adresseU;
    numTel = numTelU;
    adrMail = adrMailU;
    mdp = mdpU;
}

Utilisateur::~Utilisateur(){}

bool Utilisateur::connexion(string email, string motdepasse) {
    if(email == adrMail && motdepasse == mdp) {
        return true;
    } else {
        return false;
    }
}

void Utilisateur::deconnexion() {
    //
}

virtual void Utilisateur::afficherDetails() {
    cout<< "Nom : " <<nom<<endl;
    cout<< "Prénom : "<<prenom<<endl;
    cout<< "Adresse : "<<adresse<<endl;
    cout<< "Numéro de téléphone : "<<numTel<<endl;
    cout<< "Adresse Mail : "<<adrMail<<endl;
}