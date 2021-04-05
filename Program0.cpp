//
// Created by Shutao Zhang on 4/3/21.
//

#include "iostream"
#include "Program0.h"
#include "Node.h"
#include "CLL.h"
#include "stdlib.h"


//constructor
Program0::Program0(int uN, int uK) {
    n = uN;
    k = uK;


    //create a circular LL that has uN nodes
    for(int i = 0; i < uN; ++i){
        cList.add(i + 1);
    }
}



int Program0::theChosenOne() {
    //int counter = n - 1;
    Node* temp = cList.rear;
    Node* current = cList.rear;
    /*
    for(int i = 0; i < counter; ++i){
        int j = 0;
        while(j != k){
            temp = temp->next;
            ++j;
        }
        cList.deleteNode(temp);
    }
     */
    while (temp->next != temp){
        current = temp->next;
        for(int i = 0; i < k; ++i)
            temp = temp->next;

        cList.deleteNode(temp);
        temp = current;


    }

    return temp->player;

}