//
// Created by Shutao Zhang on 4/3/21.
//

#include "iostream"
#include "Program0.h"

using namespace std;

int main(){
    int uN, uK;

    cout<< "What is the # of participants (n)" << endl;
    cin>> uN;
    cout<< "What is the value of k" << endl;
    cin>> uK;


    //driver program to test Program0 class
    Program0 tester(uN, uK);
    cout<< tester.theChosenOne() << endl;


    return 0;

}