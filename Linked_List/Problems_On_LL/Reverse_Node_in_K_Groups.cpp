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

//Function to find kth node
ListNode* findKthNode(ListNode* temp, int k){
    k -=1;
    while(temp!=NULL && k>0){
        k--;
        temp = temp -> next;
    }
    return temp;
}

//Function to reverse LL
ListNode* reverse(ListNode* temp){
    ListNode* temp2 = temp;
    ListNode* prev = NULL;
    while (temp2 != NULL){
        ListNode* front = temp2 -> next;
        temp2 -> next = prev;
        prev = temp2;
        temp2 = front;
    }
    return prev;
}

//Function to reverse in k groups
ListNode* reverseKGroup(ListNode* head, int k) {
    ListNode* temp = head, *prevNode = NULL;
    while(temp != NULL){
        ListNode* kthNode = findKthNode(temp, k);
        if(kthNode == NULL){
            if(prevNode) prevNode -> next = temp;
            break;
        }
        ListNode* nextNode = kthNode -> next;
        kthNode -> next = NULL;
        reverse(temp);
        if(temp == head) head = kthNode;
        else prevNode -> next = kthNode;
        prevNode = temp;
        temp = nextNode;
    } 
    return head;       
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
    head = reverseKGroup(head,2);
    printLL(head);
    return 0;
}