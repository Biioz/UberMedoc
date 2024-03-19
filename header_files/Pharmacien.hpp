#include <iostream>
#include <vector>
using namespace std;

//--Pas sûr d'implementer cette classe--
class Pharmacien : public Utilisateur{

    private:
        

    public:
        Pharmacien();
        Pharmacien(string nomU, string prenomU, string adresseU, int numTelU, string adrMailU, string mdpU);
        ~Pharmacien();
        

};