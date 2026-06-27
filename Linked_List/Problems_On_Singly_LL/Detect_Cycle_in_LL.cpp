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

//Function to check cycle in LL
bool hasCycle(ListNode *head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if (slow == fast){
            return true;
        }
    } 
    return false;   
}



//Main function
int main() {
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout << hasCycle(head);
    return 0;
}
