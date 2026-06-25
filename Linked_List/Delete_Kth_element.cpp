//We have used struct method in this program instead of public class
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
Node* head = NULL;
Node* tail = NULL;
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
//Remove Kth element in LL
Node* RemoveKth(Node* head, int k){
    if(head == NULL){
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=NULL){
        cnt++;
        if(cnt == k){
            prev -> next = prev -> next -> next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}
int main(){
    pushBack(2);
    pushBack(4);
    pushBack(5);
    printLL();
    RemoveKth(head,2);
    printLL();

}