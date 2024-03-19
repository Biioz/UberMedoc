#include <iostream>
#include <vector>
using namespace std;

class Administrateur : public Utilisateur{

    public:
        Administrateur();
        Administrateur(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU);
        ~Administrateur();
        void ajouterMedicament(vector<Medicament*>*, Medicament*);
        void modifierMedicament(Medicament*);
        void supprimerMedicament(vector<Medicament*>*, Medicament*) ;
        void visualiserCommandes(Commande);
        void modifierStatutCommande(Commande*);
};