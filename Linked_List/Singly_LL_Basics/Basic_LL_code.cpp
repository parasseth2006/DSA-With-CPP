//To develop basic understanding of LinkedList
#include <iostream>
using namespace std;
// Node class to represent each node in the linked list
class Node
{
public:
    int data;
    Node* next;
};

int main()
{
    Node* first = new Node();
    Node* second = new Node();

    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    cout << first->data << endl;
    cout << first->next->data << endl;

    return 0;
}