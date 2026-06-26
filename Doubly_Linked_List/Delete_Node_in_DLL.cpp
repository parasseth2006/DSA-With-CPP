//Program to delete any Node in DLL
#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

};

//Function to convert Array to DLL
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

//Function to delete any Node 
void deleteNode(Node* temp){
    Node* prev = temp -> back;
    Node* front = temp -> next;
    if(front == NULL){
        prev -> next = NULL;
        temp -> back = NULL;
        free(temp);
        return;
    }
    prev -> next = front;
    front -> back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
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
    vector<int>arr = {1,2,3,4};
    Node* head = ConvertArr2DDL(arr);
    printLL(head);
    deleteNode(head->next);
    cout<<"After deletion of Node:\n";
    printLL(head);
    return 0;
}