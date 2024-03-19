#include <iostream>
using namespace std;

class Utilisateur {
    protected:
        string nom;
        string prenom;
        string adresse;
        int numTel;
        string adrMail;
        string mdp;
    public:
        Utilisateur();
        Utilisateur(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU);
        ~Utilisateur();
        bool connexion(string email, string motdepasse);
        void deconnexion();
        virtual void afficherDetails();
};