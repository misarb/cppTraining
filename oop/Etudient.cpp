#include <iostream>
#include <string>
#include "Etudient.h"
Etudient::Etudient(std::string name, int age)
{
    this->age = age;
    this->name = name;
}
void Etudient::getAge()
{
    std::cout << "age- " << age << std::endl;
}
std::string Etudient::getName()
{
    return name;
}
std::vector<int> Etudient::getVec()
{
    return this->mark;
}
void Etudient::setMarks(int nbr)
{
    int temp;
    for (int i = 0; i < nbr; i++)
    {
        std::cout << "Enter mark " << i + 1 << " = ";
        std::cin >> temp;
        mark.push_back(temp);
    }
}
void Etudient::showMarks()
{
    if (mark.size() != 0)
    {
        for (int i = 0; i < mark.size(); i++)
        {
            std::cout << mark.at(i) << std::endl;
        }
    }
    else
    {
        std::cout << "ther is no marks to show " << std::endl;
    }
}
void Etudient::affiche()
{
    std::cout << "age- " << age << std::endl;
    std::cout << "age- " << name << std::endl;
}