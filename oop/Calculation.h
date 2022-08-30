#ifndef CALCULATION_H
#define CALCULATION_H
#include <iostream>
#include <vector>

class Calculation
{
protected:
    std::vector<int> vec;

public:
    Calculation(std::vector<int> vec);
    float vecMoyen();
};
#endif