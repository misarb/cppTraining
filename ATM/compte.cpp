#include <iostream>
#include <vector>
#include <string>
#include "compte.h"
#include "persone.h"

using namespace std;
compte::compte(string numCmpt, float solde):persone(nom,prenom,pswd)
{
    this->numCmpt=numCmpt;
    this->solde=solde;
}
compte::compte()
{
    solde = 0;
    numCmpt = "123456";
}

void compte::disp()
{
    cout << "\n Compte Number:" << numCmpt << "\n solde:" << solde << endl;
}
float compte::getsolde(string inv)
{
    if (inv == numCmpt)
    {
        return solde;
    }
    else
        return 0;
}
void compte::autoriseWithdraw(float withdraw)
{
    if (withdraw <= solde)
    {
        cout << "You are autorised to withdraw from your a compte \n";
    }
    else
    {
        cout << "Your solde is not allowed yout to withdraw :)";
    }
}
void compte::deposit(float depo)
{
    solde += depo;
}
void compte::withdraw(float withdNum)
{
    solde -= withdNum;
}