#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
#include <limits>

class LinkedList {
private:
    Node* head; 

public:
    LinkedList();                             
    LinkedList(int* array, int len);          
    ~LinkedList();                            
    void insertNodeAtPosition(int position, int value); 
    bool deleteNodeAtPosition(int position);           
    int getValueAtPosition(int position);               
    int findFirstMatch(int target);                    
    void printLinkedList() const;                     
};

#endif 


