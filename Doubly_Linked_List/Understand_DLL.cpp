//Basics of Doubly LinkedList
#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int value) {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

int main() {
    // Create nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);

    // Link nodes
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;

    // Print forward
    cout << "Forward: ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Print backward
    cout << "Backward: ";
    temp = third;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->prev;
    }

    return 0;
}