#include <iostream>
using namespace std;

//Node Structure
struct Node{
    int data;
    Node* left; //Dont need to write struct before Node everytime in C++
    Node* right; //But in C we need to write struct everytime before Node
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

//Main function
int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> right = new Node(5);
    return 0;
}