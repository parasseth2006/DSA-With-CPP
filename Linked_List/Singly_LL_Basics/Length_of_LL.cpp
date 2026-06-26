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
    //Function to print a LL
    void printLL(){
        Node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<" -> ";
            temp = temp->next;
        }
        cout<<"NULL" <<endl;
    }
    //Function to print length of LL
    void LengthLL(){
        int cnt = 0;
        Node* temp = head;
        while(temp != NULL){
            temp = temp -> next;
            cnt ++;
        }
        cout<< "length of LL is "<<cnt;
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
    ll.LengthLL();
    
    return 0;

}
