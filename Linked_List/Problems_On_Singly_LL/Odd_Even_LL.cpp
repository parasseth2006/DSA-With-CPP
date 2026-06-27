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
ListNode* oddEvenList(ListNode* head) {
    if(head == NULL || head -> next == NULL) return head;
    ListNode* odd = head;
    ListNode* even = head -> next;
    ListNode* evenHead = head -> next;
    while( even != NULL && even -> next != NULL){
        odd -> next = odd -> next -> next;
        even -> next = even -> next -> next;
        odd = odd -> next;
        even = even -> next;
    } 
    odd -> next = evenHead;
    return head;
}
int main(){
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = oddEvenList(head);
    return 0;
}