#include <iostream>
#include <vector>
using namespace std;

class Client : public Utilisateur{

    private:
        vector<Medicament>* panier;
        //double solde;

    public:
        Client();
        Client(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU);
        ~Client();
        void afficherDetails();
        void inscrire();
        void ajouterAuPanier(Medicament);
        void retirerDuPanier(Medicament);
        Commande passerCommande();
        void payerCommande();
};