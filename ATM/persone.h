#ifndef PERSONE_H
#define PERSONE_H
#include <iostream>
#include <vector>
#include <string>
#include "compte.h"
// #include "compte.cpp"
using namespace std;
class persone
{
public:
    string nom;
    string prenom;
    string pswd;
    persone(string nom, string prenom, string pswd);
    void getNome();
    void verfiyPswd(string mdp);
    void show();
};
#endif