#include <iostream>
using namespace std;
#include "def.h"
void introduction()
{
    cout << "\n";
    cout << "***********\n";
    cout << "Tic-Tac-Toe\n";
    cout << "***********\n";
    cout << "PLAYER - 1 [X] \t PLAYER - 2 [O] \n\n";
    cout << "The 3x3 grid is shown below:\n\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bord[0][0] << "  | " << bord[0][1] << "   | " << bord[0][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bord[1][0] << "  | " << bord[1][1] << "   | " << bord[1][2] << " \n";
    cout << "\t\t_____|_____|_____\n";
    cout << "\t\t     |     |     \n";
    cout << "\t\t  " << bord[2][0] << "  | " << bord[2][1] << "   | " << bord[2][2] << " \n";
    cout << "\t\t     |     |     \n";
}
bool checkWinner()
{
    // checking Rows and Columns
    for (int i = 0; i < 3; i++)
    {
        if (bord[i][0] == bord[i][1] && bord[i][0] == bord[i][2] || bord[0][i] == bord[1][i] && bord[0][i] == bord[2][i])
        {
            return false;
        }
    }
    // Checking diagonals
    if (bord[0][0] == bord[1][1] && bord[0][0] == bord[2][2] || bord[0][2] == bord[1][1] && bord[0][2] == bord[2][0])
    {
        return false;
    }
    // checking continues game

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (bord[i][j] != 'x' && bord[i][j] != 'o')
            {
                return true;
            }
        }
    }
    draw = true;
    return false;
}
void play()
{
    // players symbole definition
    if (turn == 'x')
    {
        cout << "Player 1 turn = ";
    }
    else if (turn == 'o')
    {
        cout << "Player 2 turn = ";
    }
    cin >> choice;
    switch (choice)

    {
    case 1:
        row = 0;
        column = 0;

        break;
    case 2:
        row = 0;
        column = 1;

        break;
    case 3:
        row = 0;
        column = 2;

        break;
    case 4:
        row = 1;
        column = 0;

        break;
    case 5:
        row = 1;
        column = 1;

        break;
    case 6:
        row = 1;
        column = 2;

        break;
    case 7:
        row = 2;
        column = 0;

        break;
    case 8:
        row = 2;
        column = 1;

        break;
    case 9:
        row = 2;
        column = 2;

        break;

    default:
        cout << "invalide choice pls try again";
        break;
    }
    // update the bord
    if (turn == 'x' && bord[row][column] != 'x' && bord[row][column] != 'x')
    {
        // change sympole
        bord[row][column] = 'x';
        turn = 'o';
    }
    else if (turn == 'o' && bord[row][column] != 'x' && bord[row][column] != 'x')
    {
        bord[row][column] = 'o';
        turn = 'x';
    }
    else
    {
        cout << "invalide position to play";
        play();
    }
    //end
    introduction();
}