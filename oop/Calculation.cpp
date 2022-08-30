#include <iostream>
#include <vector>
#include "Calculation.h"

Calculation::Calculation(std::vector<int> vec)
{
    this->vec = vec;
}
float Calculation::vecMoyen()
{
    int result =0;
    for (int i = 0; i < vec.size(); i++)
    {
        result +=vec.at(i);
    
    }
    return result/vec.size();
}