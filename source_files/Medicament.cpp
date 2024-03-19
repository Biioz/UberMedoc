#include <iostream>
#include <vector>

Medicament::Medicament(int refM, string nomM, double prixM){
    ref = refM;
    nom = nomM;
    prix = prixM;
}

Medicament::~Medicament();