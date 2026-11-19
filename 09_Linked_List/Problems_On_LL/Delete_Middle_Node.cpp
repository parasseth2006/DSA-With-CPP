#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;

    public:
    ListNode(int data1, ListNode* next1){
    val = data1;
    next = next1;

    }

    public:
    ListNode(int data1){
    val = data1;
    next = nullptr;
    }
};
ListNode* deleteMiddle(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    if(head == NULL || head -> next == NULL) return NULL;
    fast = head -> next -> next;
    while(fast != NULL && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    } 
    ListNode* middleNode = slow -> next;
    slow -> next = slow -> next -> next;
    delete middleNode;
    return head;
}

ListNode* printLL(ListNode* head){
    ListNode* temp = head;
    while(temp!=NULL){
        cout<< temp->val<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL" <<endl;
    return head;
}
int main(){
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = deleteMiddle(head);
    printLL(head);
    return 0;
}