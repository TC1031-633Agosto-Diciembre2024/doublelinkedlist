//
// Created by Andrés Torres on 06/09/24.
//
#include <iostream>
#include "LinkedList.h"
using namespace std;

void LinkedList::insertAtStart(int value) {
    Node* newNode= new Node(value);
    if(head==nullptr) {
        head= newNode;
        tail= newNode;
    }else {
        newNode->setNext(head);
        head->setPrev(newNode);
        head=newNode;
    }
}

void LinkedList::insertAtFinish(int value) {
    Node* newNode= new Node(value);
    if(head==nullptr) {
        head= newNode;
        tail= newNode;
    }else {
        tail->setNext(newNode);
        newNode->setPrev(tail);
        tail=newNode;
    }
}


void LinkedList::displayList() {
    Node* current=head;
    cout<<"[";
    while(current!= nullptr) {
        cout<<current->getData()<<" ,";
        current= current->getNext();
    }
    cout<<"]"<<endl;
}

void LinkedList::displayListBackwards() {
    Node* current=tail;
    cout<<"[";
    while(current!= nullptr) {
        cout<<current->getData()<<" ,";
        current= current->getPrev();
    }
    cout<<"]"<<endl;
}


int LinkedList::findElement(int value) {
    Node* current=head;
    int index=0;
    while(current!= nullptr) {
        if(current->getData()==value) {
            return index;
        }
        current= current->getNext();
        index+=1;
    }
    return -1;
}

void LinkedList::deleteElement(int value) {
    Node* current=head;
    while(current!=nullptr) {
        if(current->getData()==value) {
            if(current->getPrev()!=nullptr) {
                current->getPrev()->setNext(current->getNext());
            }else {
                head= current->getNext();
            }
            if(current->getNext()!=nullptr) {
                current->getNext()->setPrev(current->getPrev());
            }else {
                tail=current->getPrev();
            }
            delete current;
            return;
        }
        current= current->getNext();
    }

}
