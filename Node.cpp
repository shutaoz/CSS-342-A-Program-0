// Node.cpp
// Created by Shutao Zhang on 4/4/21.
// 1978017
// class implementation file for the Node class. A Node object stores an int and a pointer that points to
// a Node.

#include "Node.h"
#include "cstdlib"

Node::Node(int playerNum){
    player = playerNum;
    next = NULL;
}