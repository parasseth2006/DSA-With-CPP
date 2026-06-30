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
bool isPalindrome(ListNode* head) {
    if(head == NULL || head -> next == NULL) return true;
    ListNode *slow = head, *fast = head;
    while(fast -> next != NULL && fast -> next -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    ListNode *newHead = reverseList(slow -> next);
    ListNode *first = head;
    ListNode *second = newHead;
    while(second != NULL){
        if(first -> val != second -> val){
            return false;
        }
        first = first -> next;
        second = second -> next;
    }
    reverseList(newHead);
    return true;
}
int main(){
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(2);
    head->next->next->next->next = new ListNode(1);
    cout<< isPalindrome(head);
    return 0;
}