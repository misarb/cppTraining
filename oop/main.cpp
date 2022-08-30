#include <iostream>
#include "Etudient.h"
#include "Etudient.cpp"
#include "Calculation.h"
#include "Calculation.cpp"
int main()
{
    Etudient e = Etudient("misar", 23);
    e.affiche();
    e.setMarks(5);
    e.showMarks();
    Calculation c = Calculation(e.getVec());
    float moy = c.vecMoyen();
    std::cout<<"moyen = "<<moy<<std::endl;
    
    

    return 0;
}