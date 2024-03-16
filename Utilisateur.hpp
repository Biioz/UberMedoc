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

        Utilisateur(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU);
        ~Utilisateur();
        
        bool connexion(string email, string motdepasse) {
            if(email == adrMail && motdepasse == mdp) {
                return true;
            } else {
                return false;
            }
        }

        void deconnexion() {
            //
        }

        void afficherDetails() {
            cout<< "Nom : " <<nom<<endl;
            cout<< "Prénom : "<<prenom<<endl;
            cout<< "Adresse : "<<adresse<<endl;
            cout<< "Numéro de téléphone : "<<numTel<<endl;
            cout<< "Adresse Mail : "<<adrMail<<endl;
        }
};