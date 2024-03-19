#include <iostream>
#include <vector>
using namespace std;

Commande::Commande(int refC, vector<Medicament> medocs, double prixC ){{
    ref = refC;
    produit = medocs;
    prix = prixC;
}}

Commande::~Commande(){}

