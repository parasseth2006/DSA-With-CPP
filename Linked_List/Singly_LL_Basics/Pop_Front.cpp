#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
class List{
    Node* head;
    Node* tail;
    public:
    List(){
        head = tail = NULL;
    }
    //Insertion at the end of linkedlist
    void pushBack(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        } 
        else{
            tail -> next = newNode;
            tail = newNode;
        }
    }
    void popFront(){
        if(head == NULL){
            cout<< "LL is empty";
            return;
        }
        else{
            Node* temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp->data <<" -> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    List ll;
    ll.pushBack(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.printLL();
    ll.popFront();
    ll.printLL();
    return 0;
}
