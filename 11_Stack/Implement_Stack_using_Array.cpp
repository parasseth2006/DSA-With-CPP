#include <iostream>
using namespace std;
int st[10];
int top = -1;
void push(int x){
    top = top + 1;
    st[top] = x;
}

void pop(){
    if(top == -1) {
        cout<< "Stack is empty";
        return;
    }
    top = top - 1;
}

int peek(){
    if (top == -1){
        return -1;
    }
    return st[top];
}

int size(){
    return top + 1;
}

void Print(){
    if(top == -1){
        cout<< "STack is empty:\n";
    }
    for(int i = top; i >= 0; i--){
        cout<< st[i]<< endl;
    }
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    Print();
}
