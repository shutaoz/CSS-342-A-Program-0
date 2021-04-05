// main.cpp
// Created by Shutao Zhang on 4/3/21.
// 1978017
// this program is for testing the Program0 class. the program takes int as inputs and outputs an int
// the program expects ints greater or equal to 0 for k and ints greater than 0 for n
// a Program0 object is the key variable this driver manages

#include "iostream"
#include "Program0.h"

using namespace std;

int main(){
    int uN, uK;

    cout<< "What is the # of participants (n)" << endl;
    cin>> uN;
    cout<< "What is the value of k" << endl;
    cin>> uK;


    //call the constructor of the Program0 class
    Program0 tester(uN, uK);
    cout<< tester.theChosenOne() << endl;


    return 0;

}