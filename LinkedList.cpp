#include "LinkedList.h"
#include <iostream>
#include <limits>


LinkedList::LinkedList() : head(nullptr) {} // Start with an empty list

LinkedList::LinkedList(int* array, int length) : head(nullptr) {
    for (int i = 0; i < length; ++i) {
        insertAtPosition(i + 1, array[i]); // Insert elements in order
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* temp = current;
        current = current->getNext(); // Move to next before deleting
        delete temp;                  // Free memory
    }
}

void LinkedList::insertAtPosition(int position, int value) {
    Node* newNode = new Node(value);

    if (position <= 1 || head == nullptr) {
        newNode->setNext(head);
        head = newNode;
    } else {
        Node* current = head;
        int index = 1;
        while (current->getNext() != nullptr && index < position - 1) {
            current = current->getNext();
            index++;
        }
        newNode->setNext(current->getNext());
        current->setNext(newNode);
    }
}

bool LinkedList::deleteAtPosition(int position) {
    if (head == nullptr || position <= 0) return false;

    if (position == 1) {
        Node* temp = head;
        head = head->getNext();
        delete temp;
        return true;
    }

    Node* current = head;
    int index = 1;

    while (current->getNext() != nullptr && index < position - 1) {
        current = current->getNext();
        index++;
    }

    if (current->getNext() == nullptr) return false;

    Node* temp = current->getNext();
    current->setNext(temp->getNext());
    delete temp;
    return true;
}

int LinkedList::getValueAt(int position) {
    if (position <= 0) return std::numeric_limits<int>::max();

    Node* current = head;
    int index = 1;

    while (current != nullptr && index < position) {
        current = current->getNext();
        index++;
    }

    return (current != nullptr) ? current->getValue() : std::numeric_limits<int>::max();
}

int LinkedList::findFirstOccurrence(int target) {
    Node* current = head;
    int index = 1;

    while (current != nullptr) {
        if (current->getValue() == target) return index;
        current = current->getNext();
        index++;
    }

    return -1; // Not found
}

void LinkedList::displayList() const {
    if (head == nullptr) return;

    Node* current = head;
    std::cout << "[";
    while (current != nullptr) {
        std::cout << current->getValue();
        if (current->getNext() != nullptr) std::cout << " ";
        current = current->getNext();
    }
    std::cout << "]" << std::endl;
}
