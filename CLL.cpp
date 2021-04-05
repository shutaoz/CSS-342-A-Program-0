// CLL.cpp
// Created by Shutao Zhang on 4/4/21.
// 1978017
// class implementation file for the CLL class
// CLL stands for circular linked list, it's the data structure that manages a list of nodes that represent participants of
// the game

#include "CLL.h"
#include "Node.h"
#include "cstdlib"

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

//delete the node next to the node passed in
void CLL::deleteNextNode(Node *dNode) {
    Node* temp = dNode->next;
    dNode->next = dNode->next->next;
    free(temp);
}