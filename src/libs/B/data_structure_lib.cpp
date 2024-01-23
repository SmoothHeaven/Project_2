#include "data_structure_lib.h"
#include <iostream>

Node::Node(int value) : data(value), next(nullptr) {}

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    Node* current = head;
    Node* nextNode;
    while (current != nullptr) {
        nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

bool LinkedList::isEmpty() {
    return head == nullptr;
}

void LinkedList::append(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void LinkedList::prepend(int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void LinkedList::display() {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " -> ";
        current = current->next;
    }
    std::cout << "nullptr" << std::endl;
}

void LinkedList::deleteNode(int data) {
    if (isEmpty()) {
        return;
    }

    if (head->data == data) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data != data) {
        current = current->next;
    }

    if (current->next != nullptr) {
        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
}
