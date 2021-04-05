//
// Created by Shutao Zhang on 4/3/21.
//

#ifndef CSS_342_A_PROGRAM_0_PROGRAM0_H
#define CSS_342_A_PROGRAM_0_PROGRAM0_H

#include "CLL.h"
#include "cstdlib"
#include "Node.h"

class Program0{


public:
    int n;
    int k;
    CLL cList;
    //constructor
    Program0(int uN, int uK);
    int theChosenOne(); //return the result after calculating which node survives the game

};




#endif //CSS_342_A_PROGRAM_0_PROGRAM0_H


