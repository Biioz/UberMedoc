#include <iostream>
#include <vector>
using namespace std;

class Medicament{
    private:
        int ref;
        string nom;
        double prix;

    public:
        Medicament();
        Medicament(int, string, double);
        ~Medicament();
};