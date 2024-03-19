#include <iostream>
#include <vector>
using namespace std;

class Commande{
    private:
        int ref;
        Client* client;
        vector<Medicament> produit;
        double prix;

    public:
        Commande();
        Commande(int, string, double);
        ~Commande();
};