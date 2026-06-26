#include <bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int data;

    ListNode* next;
    ListNode* back;

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

//Function to Find middle of LL
ListNode* middleNode(ListNode* head) {
    ListNode* slow = head;
    ListNode* fast = head;
    while(fast != NULL && fast ->next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow;
}

//Main function
int main() {
    // Creating a sample linked list: 
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);

    // Find the middle node
    ListNode* middlenode = middleNode(head);
    cout << "The middle node value is: " << middlenode->data << endl;

    return 0;
}
