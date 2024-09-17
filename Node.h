//
// Created by Andrés Torres on 06/09/24.
//

#ifndef NODE_H
#define NODE_H


class Node {
private:
    int data;
    Node* next;
    Node* prev;
public:
    Node(int value): data(value),next(nullptr),prev(nullptr){}
    int getData();
    void setData(int data);
    void setNext(Node* next);
    Node* getNext();
    void setPrev(Node* prev);
    Node* getPrev();
    void printNode();
};

#endif //NODE_H
