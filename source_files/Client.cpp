#include <iostream>
#include <vector>
using namespace std;

Client::Client(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU)
: Utilisateur(nomU, prenomU, adresseU, numTelU, adrMailU, mdpU){}


Client::~Client(){
    //code here
}

Client::afficherDetails(){
    Utilisateur::afficherDetails();
    cout << "Panier de " << nom << ": "<< endl;
    for (Medicament medoc : panier){
        medoc.afficherDetails();
    }
}

void Client::inscrire(){
    //code here
}

void Client::ajouterAuPanier(Medicament){
    //code here
}

void Client::retirerDuPanier(Medicament){
    //code here
}

Commande Client::passerCommande(){
    //code here
}

void Client::payerCommande(){
    //code here
}
