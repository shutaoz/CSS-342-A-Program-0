//
// Created by Shutao Zhang on 4/4/21.
//

#ifndef CSS_342_A_PROGRAM_0_CLL_H
#define CSS_342_A_PROGRAM_0_CLL_H

#include "cstdlib"
#include "Node.h"

class CLL {
public:
    Node* rear;


    //add a new node to the list
    void add(int playerNum);

    //delete the current node (uNode) from the existing list
    void deleteNode(Node* uNode);

    //delete the next node (uNode->next)
    void deleteNextNode(Node* uNode);

    CLL() {
        rear = NULL;
    }

};


#endif //CSS_342_A_PROGRAM_0_CLL_H
