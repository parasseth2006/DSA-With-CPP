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
//Function to print DLL
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<< endl;
    
}

Node* ConvertArr2DDL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node( arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

Node * removeDuplicates(Node *head)
{
    Node* temp = head;
    while(temp != NULL && temp -> next != NULL){
        Node* nextNode = temp -> next;
        while(nextNode != nullptr && nextNode -> data == temp -> data){
            Node *duplicate = nextNode;
            nextNode = nextNode -> next;
            delete duplicate;
        }
        temp -> next = nextNode;
        if(nextNode != NULL) nextNode -> prev = temp;
        temp = temp -> next;
    }
    return head;
}
int main(){
    vector<int>arr = {1,2,2,4,4,9,9,9};
    Node* head = ConvertArr2DDL(arr);
    printLL(head);
    removeDuplicates(head);
    printLL(head);
    return 0;
}
