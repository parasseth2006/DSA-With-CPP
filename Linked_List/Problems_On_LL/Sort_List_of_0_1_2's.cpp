#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node* next;

    public:
    Node(int val){
        data = val;
        next = NULL;
    }
};

Node* sortList(Node *head){
    Node* zeroHead = new Node(-1);
    Node* oneHead = new Node(-1);
    Node* twoHead = new Node(-1);
    Node* zero = zeroHead;
    Node* one = oneHead;
    Node* two = twoHead;
    Node* temp = head;
    while(temp != NULL){
        if(temp -> data == 0){
            zero -> next = temp;
            zero = temp;
        }
        else if(temp -> data == 1){
            one -> next = temp;
            one = temp;
        }
        else{
            two -> next = temp;
            two = temp;
        }
        temp = temp -> next;

    }
    zero -> next = (oneHead -> next)?(oneHead -> next) : (twoHead -> next);
    one -> next = twoHead -> next;
    two -> next = NULL;
    Node* newhead = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newhead;
}
void printLL(Node *head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL" <<endl;
}
int main(){
    // Creating a sample linked list: 
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(0);
    head->next->next->next = new Node(2);
    head->next->next->next->next = new Node(0);
    sortList(head);
    printLL(head);
    return 0;
}