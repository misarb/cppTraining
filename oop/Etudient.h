#ifndef ETUDIENT_H
#define ETUDIENT_H
#include <iostream>
#include <string>
#include <vector>

class Etudient
{
private:
    int age;
    std::string name;
    std::vector<int> mark;

public:
    Etudient(std::string name, int age);
    void getAge();
    std::string getName();
    std::vector<int> getVec();
    void setMarks(int nbr);
    void showMarks();
    void affiche();
};
#endif