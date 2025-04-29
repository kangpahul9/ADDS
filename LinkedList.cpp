#include "LinkedList.h"
#include <iostream>

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::LinkedList(int* array, int length) : head(nullptr) {
    for (int i = 0; i < length; ++i) {
        insertNodeAtPosition(i + 1, array[i]);
    }
}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* toDelete = current;
        current = current->getLink();
        delete toDelete;
    }
}

void LinkedList::insertNodeAtPosition(int position, int value) {
    Node* newNode = new Node(value);

    if (position <= 1 || head == nullptr) {
        newNode->setLink(head);
        head = newNode;
    } else {
        Node* current = head;
        int currentIndex = 1;

        while (current->getLink() != nullptr && currentIndex < position - 1) {
            current = current->getLink();
            currentIndex++;
        }

        newNode->setLink(current->getLink());
        current->setLink(newNode);
    }
}

bool LinkedList::deleteNodeAtPosition(int position) {
    if (head == nullptr || position <= 0) return false;

    if (position == 1) {
        Node* toDelete = head;
        head = head->getLink();
        delete toDelete;
        return true;
    }

    Node* current = head;
    int currentIndex = 1;

    while (current != nullptr && currentIndex < position - 1) {
        current = current->getLink();
        currentIndex++;
    }

    if (current == nullptr || current->getLink() == nullptr) {
        return false;
    }

    Node* toDelete = current->getLink();
    current->setLink(toDelete->getLink());
    delete toDelete;
    return true;
}

int LinkedList::getValueAtPosition(int position) {
    if (position <= 0) {
        return std::numeric_limits<int>::max();
    }

    Node* current = head;
    int currentIndex = 1;

    while (current != nullptr && currentIndex < position) {
        current = current->getLink();
        currentIndex++;
    }

    if (current == nullptr) {
        return std::numeric_limits<int>::max();
    }

    return current->getData();
}

int LinkedList::findFirstMatch(int target) {
    Node* current = head;
    int index = 1;

    while (current != nullptr) {
        if (current->getData() == target) {
            return index;
        }
        current = current->getLink();
        index++;
    }

    return -1;
}

void LinkedList::printLinkedList() const {
    if (head == nullptr) return;

    Node* current = head;
    std::cout << "[";

    while (current != nullptr) {
        std::cout << current->getData();
        if (current->getLink() != nullptr) {
            std::cout << " ";
        }
        current = current->getLink();
    }

    std::cout << "]" << std::endl;
}
