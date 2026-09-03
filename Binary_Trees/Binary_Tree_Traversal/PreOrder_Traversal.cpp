#include <iostream>
#include <vector>
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

//Preorder Traversal
void preOrder(Node* root, vector<int>& arr){
    if(root == nullptr) return;
    arr.push_back(root->data);
    preOrder(root->left, arr);
    preOrder(root->right, arr);
}
vector<int> preorderTraversal(Node* root) {
    vector<int>arr;
    preOrder(root,arr);
    return arr;  
}


//Main function
int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> right = new Node(5);
    vector<int>arr = preorderTraversal(root);
    for(int it: arr){
        cout << it<<" ";
    }
    return 0;
}