//Program to insert a new node at any position in the Linked List
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
    //Function to insert at the end of LL
    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
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
    //Function to insert an element at any position in LL
    void insertAtPos(int val, int pos){
        if(pos < 1){
            cout<<"Invalid position\n";
            return;
        }
        if(pos == 1){
            pushFront(val);
            return;
        }
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            cnt++;
            if(cnt == (pos-1)){
                Node* x = new Node(val);
                x->next = temp->next;
                temp->next = x;
                break;
            }
            temp = temp -> next;
        }
    }        
        
    
    //Function to print a LL
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL" <<endl;
    }
};

//Main function
int main(){
    List ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.printLL();
    ll.insertAtPos(6,2);
    ll.printLL();
    return 0;

}
