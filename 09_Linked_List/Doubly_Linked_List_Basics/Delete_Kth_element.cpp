//Program to delete Kth element of a Doubly LinkedList
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

//Function to delete head of DLL
Node* deleteHead(Node* head){
    if(head == NULL || head -> next == NULL){
        return NULL;
    }
    Node* prev = head;
    head = head -> next;
    head -> back = nullptr;
    prev -> next = nullptr;
    delete prev;
    return head;
}

//Function to delete tail of DLL
Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL){
        return NULL;
    }
    Node* tail = head ;
    while(tail -> next != NULL){
        tail = tail -> next;
    }
    Node* newTail = tail -> back;
    newTail -> next = nullptr;
    tail -> back = nullptr;
    delete tail;
    return head;
}

//Function to delete kth element of DLL
Node* deleteKthelement(Node* head, int k){
    if(head == NULL){
        return NULL;

    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode -> next;
    }
    Node* prev = kNode -> back;
    Node* front = kNode -> next;
    if(prev == NULL && front == NULL){
        return NULL;
    }
    else if(prev == NULL){
        return deleteHead(head);
    }
    else if(front == NULL){
        return deleteTail(head);
    }
    prev -> next = front;
    front -> back = prev;
    kNode -> next = nullptr;
    kNode -> back = nullptr;
    delete kNode;
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
    vector<int>arr = {1,2,3,4};
    Node* head = ConvertArr2DDL(arr);
    printLL(head);
    head = deleteKthelement(head,4);
    cout<<"After deletion of Kth element:\n";
    printLL(head);
    return 0;
}