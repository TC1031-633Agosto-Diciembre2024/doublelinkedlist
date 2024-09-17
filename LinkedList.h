//
// Created by Andrés Torres on 06/09/24.
//

#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"

class LinkedList {
private:
    Node* head;
    Node* tail;
public:
    LinkedList() : head(nullptr), tail(nullptr){}
    void insertAtStart(int value);
    void insertAtFinish(int value);
    void displayList();
    void displayListBackwards();
    int findElement(int value);
    void deleteElement(int value);
    ~LinkedList() {
        Node* current=head;
        while(current!=nullptr) {
            Node* temp= current;
            current=current->getNext();
            delete temp;
        }
    }
};

#endif //LINKEDLIST_H
