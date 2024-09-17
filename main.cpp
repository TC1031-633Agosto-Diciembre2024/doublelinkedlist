#include <iostream>

#include "LinkedList.h"

int main()
{
    LinkedList doubleLinkedList;
    doubleLinkedList.insertAtStart(10);
    doubleLinkedList.insertAtFinish(20);
    doubleLinkedList.insertAtFinish(30);
    doubleLinkedList.insertAtFinish(40);
    doubleLinkedList.insertAtFinish(50);

    doubleLinkedList.displayList();
    doubleLinkedList.displayListBackwards();
    doubleLinkedList.deleteElement(30);
    doubleLinkedList.displayList();
    doubleLinkedList.displayListBackwards();

    return 0;
}
