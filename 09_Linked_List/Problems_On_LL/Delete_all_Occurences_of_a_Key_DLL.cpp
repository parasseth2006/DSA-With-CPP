#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        prev = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};

//Function to delete occurences of key
Node* DeleteOcc(Node* head, int key){
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            if(temp == head){
                head = head -> next;
            }
            Node* nextNode = temp -> next;
            Node* prevNode = temp -> prev;
            if(nextNode){
                nextNode -> prev = prevNode;
            }
            if(prevNode){
                prevNode -> next = nextNode;
            }
            delete temp;
            temp = nextNode;
        }
        else{
            temp = temp -> next;
        }
    }
    return head;
}
//Function to print DLL
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<< endl;
    
}

int main(){
    Node* head = new Node(1);
    head -> next = new Node(2);
    head -> next -> prev = head;
    printLL(head);
    head = DeleteOcc(head, 2);
    printLL(head);
}