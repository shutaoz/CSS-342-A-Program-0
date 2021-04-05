//
// Created by Shutao Zhang on 4/4/21.
//

#include "CLL.h"
#include "Node.h"
#include "stdlib.h"

void CLL::add(int playerNum){
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

//delete the current node
void CLL::deleteNode(Node* dNode) {
    Node* temp = dNode;
    Node* current = dNode;
    while(current->next != temp)
        current = current->next;
    current->next = current->next->next;
    if(rear == dNode)
        rear = dNode->next;
    free(temp);

}