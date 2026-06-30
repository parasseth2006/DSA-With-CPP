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
ListNode* removeNthFromEnd(ListNode* head, int n) {
    ListNode* fast = head;
    ListNode* slow = head;
    for(int i = 0; i < n; i++){
        fast = fast -> next;
    }
    if(fast == NULL){
        ListNode* newHead = head -> next;
        delete (head);
        return newHead;
    }
    while(fast -> next != NULL){
        fast = fast -> next;
        slow = slow -> next;
        
    }
    
    ListNode* delNode = slow -> next;
    slow -> next = slow -> next ->next;
    delete(delNode);

    return head;
}
int main(){
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head = removeNthFromEnd(head ,2);
    return 0;
}