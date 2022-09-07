#include <iostream>
#include "persone.h"
#include "persone.cpp"
#include "compte.h"
#include "compte.cpp"
using namespace std;

int main()
{
    persone p = persone("misar", "bouba", "x089sdA@");
    p.show();
    compte cmp1 = compte("00112233",254) ;
    cmp1.disp();
    
    return 0;
}
// void menu()
// {

//     cout << "\t_________________Menu_________________ \n\n";
//     cout << "\t -1- Check balance \n ";
//     cout << "\t -2- Deposit \n ";
//     cout << "\t -3- Withdrow \n";
//     cout << "\t -4- Show menu \n";
//     cout << "\t -5- Quit \n";
// }