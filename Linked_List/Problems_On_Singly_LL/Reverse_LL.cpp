#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* next;
   
    public:
    ListNode(int data1, ListNode* next1){
        data = data1;
        next = next1;
     
    }

    public:
    ListNode(int data1){
        data = data1;
        next = nullptr;
    }

};

//Function to reverse LL
ListNode* reverseList(ListNode* head) {
    ListNode* temp = head;
    ListNode* prev = NULL;
    while (temp != NULL){
        ListNode* front = temp -> next;
        temp -> next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

//Print LL
void printLL(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<< endl;
    
}
//Main function
int main() {
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    printLL(head);
    head = reverseList(head);
    printLL(head);
    return 0;
}
