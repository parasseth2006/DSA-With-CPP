//Program to insert a new node at the beginning (head) of the Linked List
#include <iostream>
using namespace std;
// Node class to represent each node in the linked list
class Node{
    public:
    int data;
    Node* next;
    // Constructor with only data
    Node(int val){
        data = val;
        next = NULL;
    }
};
//Class for list
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    //Function to insert at the head of LL
    void pushFront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            newNode->next = head;
            head = newNode;
        }
    }
    //Function to print a LL
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<"  ";
            temp = temp->next;
        }
    }
};

//Main function
int main(){
    List ll;
    ll.pushFront(1);
    ll.pushFront(2);
    ll.pushFront(3);
    ll.pushFront(4);
    ll.printLL();
    return 0;

}
