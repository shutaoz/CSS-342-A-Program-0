//
// Created by Shutao Zhang on 4/4/21.
//

#ifndef CSS_342_A_PROGRAM_0_CLL_H
#define CSS_342_A_PROGRAM_0_CLL_H


class CLL {
public:
    Node* rear;


    //add a new node to the list
    void add(int playerNum);

    //delete a node from the existing list
    void deleteNode();

    CLL() {
        rear = NULL;
    }

};


#endif //CSS_342_A_PROGRAM_0_CLL_H
