//
// Created by Andrés Torres on 06/09/24.
//
#include <iostream>
#include "Node.h"
using namespace std;
int Node::getData(){
    return data;
}

void Node::setData(int data){
    this->data=data;
}

Node* Node::getNext(){
    return next;
}

void Node::setNext(Node* next){
    this->next= next;
}
Node* Node::getPrev(){
    return prev;
}

void Node::setPrev(Node* prev){
    this->prev= prev;
}

void Node::printNode(){
    cout<<"Nodo: "<<data<<endl;
}
