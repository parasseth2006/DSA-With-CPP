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
//Funcion to rotate LL by k 
ListNode* rotateRight(ListNode* head, int k) {
    if (head == NULL || head -> next == NULL) return head;
    ListNode *temp = head;
    int len = 0;
    while(temp != NULL){
        len ++;
        temp = temp -> next;
    }
    k = k % len;
    if (k == 0) return head;
    int cnt = len - k;
    temp = head;
    while(cnt > 1){
        temp = temp -> next;
        cnt --;
    }
    ListNode* newHead = temp -> next;
    temp -> next = nullptr;
    ListNode* node = newHead;
    while(node -> next != nullptr){
        node = node -> next;
    }
    node -> next = head;
    return newHead;
}
//function to print LL
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
    printLL(head);
    head = rotateRight(head,2);
    printLL(head);
    return 0;
}
