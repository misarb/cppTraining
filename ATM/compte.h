#ifndef COMPTE_H
#define COMPTE_H
#include <iostream>
#include <vector>
#include <string>
#include "persone.h"
using namespace std;
class compte :public persone
{
public:
    string numCmpt;
    float solde;
public:
    compte(string numCmpt,float solde);
    compte();
    void disp();
    float getsolde(string inv);
    void autoriseWithdraw(float withdraw);
    void deposit(float depo);
    void withdraw(float withdNum);
};
#endif