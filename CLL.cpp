//
// Created by Shutao Zhang on 4/4/21.
//

#include "CLL.h"
#include "Node.h"
#include "stdlib.h"

CLL::add(int playerNum){
    //case 1 the list is empty
    if(!rear) {
        rear = new Node(playerNum);
        rear->next = rear;

    }

    //case 2 the list is not empty
    else{
        Node* temp = new Node(playerNum);
        Node* current = rear;
        temp->next = rear;
        while(current->next != rear)
            current = current->next;
        current->next = temp;
    }

}

CLL::deleteNode(Node* dNode) {
    Node* temp = dNode->next;
    dNode->next = dNode->next->next;
    free(temp);

}