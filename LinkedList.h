#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <limits>

class LinkedList
{
private:
    Node *head;

public:
    LinkedList();
    LinkedList(int *array, int length);
    ~LinkedList();
    void insertAtPosition(int position, int value);
    bool deleteAtPosition(int position);
    int getValueAt(int position);
    int findFirstOccurrence(int target);
    void displayList() const;
};

#endif
