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
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if(headA == NULL || headB == NULL) return NULL;
    ListNode* tA = headA;
    ListNode* tB = headB;   
    while(tA != tB){
        tA = tA -> next;
        tB = tB -> next;
        if (tA == tB){
            return tA;
        }
            else if(tA == NULL){
            tA = headB;
        }
            else if(tB == NULL){
            tB = headA;
        }
    }
    return tA;
}