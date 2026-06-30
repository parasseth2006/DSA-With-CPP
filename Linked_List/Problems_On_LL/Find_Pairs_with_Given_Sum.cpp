#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    public:
    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        prev = back1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

};
//Function to print DLL
void printLL(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<< temp->data<<"  ";
        temp = temp->next;
    }
    cout<< endl;
    
}

Node* ConvertArr2DDL(vector<int>&arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node( arr[i], nullptr, prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

Node* findTail(Node* head){
    Node* tail = head;
    while(tail -> next != NULL) tail = tail -> next;
    return tail;
}
vector<pair<int, int>> findPairs(Node* head, int k)
{
    Node* left = head, *right = findTail(head);
    vector<pair<int, int>> ans;
    if(head == NULL) return ans;
    while(left->data < right->data){
        if( left->data + right->data == k){
            ans.push_back({left->data, right->data});
            left = left -> next;
            right = right -> prev;
        }
        else if(left->data + right->data < k){
            left = left -> next;
        }
        else right = right -> prev;
    }
    return ans;

}
int main(){
    vector<int>arr = {1,2,3,4,9};
    Node* head = ConvertArr2DDL(arr);
    printLL(head);
    findPairs(head, 4);
    return 0;
}
