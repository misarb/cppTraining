#ifndef DEF_H
#define DEF_H
#include <iostream>
using namespace std;
// Golbal variable
char bord[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
bool draw = false;
char turn = 'x';
int row, column, choice;
// function prototype
void introduction();
bool checkWinner();
void play();

#endif