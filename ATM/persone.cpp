#include <iostream>
#include <vector>
#include <string>
#include "persone.h"

// #include "compte.cpp"
using namespace std;
persone::persone(string nom, string prenom, string pswd)
{
    this->nom = nom;
    this->prenom = prenom;
    this->pswd = pswd;
}
void persone::getNome()
{
    cout << "\t Nome  = " << nom << endl;
    cout << "\t prenom  = " << prenom << endl;
}
void persone::verfiyPswd(string mdp)
{
    if (pswd == mdp)
    {
        cout << " password correct\n";
    }
    else
    {
        cout << " password invalide plz try again \n";
    }
}
void persone::show()
{
    
        cout << "nome : " << nom << "\n Compte number : " << prenom << endl;
    
}