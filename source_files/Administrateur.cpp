#include <iostream>
#include <vector>
using namespace std;

Administrateur::Administrateur(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU) 
: Utilisateur(nomU, prenomU, adresseU, numTelU, adrMailU, mdpU) {}

Administrateur::~Administrateur(){}

void Administrateur::ajouterMedicament(vector<Medicament*>* catalogue, Medicament* medoc){
    //code here
}

void Administrateur::modifierMedicament(Medicament* medoc){
    //code here
}

void Administrateur::supprimerMedicament(vector<Medicament*>* catalogue, Medicament* medoc){
    //code here
}

void Administrateur::visualiserCommandes(Commande commande){
    //code here
}

void Administrateur::modifierStatutCommande(Commande* commande){
    //code here
}