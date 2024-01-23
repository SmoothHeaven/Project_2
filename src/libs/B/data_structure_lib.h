#ifndef DATA_STRUCTURE_H
#define DATA_STRUCTURE_H

class Node {
public:
    int data;
    Node* next;

    Node(int value);
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList();
    ~LinkedList();

    bool isEmpty();
    void append(int data);
    void prepend(int data);
    void display();
    void deleteNode(int data);
};

#endif
