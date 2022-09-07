#include <iostream>
#include "def.h"
#include "dec.cpp"
using namespace std;
int main()
{
   
    while (checkWinner())
    {
        introduction();
        play();
        checkWinner();
    }
    if (turn == 'x' && draw == false)
    {
        cout << "\n\n Player with 'o' has won the game";
    }
    else if (turn == 'o' && draw == false)
    {
        cout << "\n\n  Player with 'x' has won the game";
    }
    else
    {
        cout << "\n\n Draw end Game";
    }
    return 0;
}
