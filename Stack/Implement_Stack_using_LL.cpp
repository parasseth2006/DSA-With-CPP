#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data1){
        data = data1;
        next = NULL;
    }
};

Node* top = NULL;
int size = 0; 

//Push an element into a stack
void push(int x){
    Node* temp = new Node(x);
    temp -> next = top;
    top = temp;
    
    size = size+1;
}

void pop(){
    Node* temp = top;
    top = top -> next;
    delete temp;
    size--;
}

int topele(){
    return top -> data;
    
}

//Print stack
void print(){
    Node* temp = top;
    while(temp != NULL){
        cout<< temp -> data << endl;
        temp = temp -> next;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    print();
    pop();
    print();
}

