#include <iostream>
#include <vector>
#include <stack>
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

//Inorder Traversal
vector<int> inorderTraversal(Node* root) {
    vector<int> arr;
    stack<Node*>st;
    Node* node = root;
    while(true){
        if(node != NULL){
            st.push(node);
            node = node -> left;
        }
        else{
            if(st.empty()) break;
            node = st.top();
            st.pop();
            arr.push_back(node -> data);
            node = node -> right;
        }
    } 
    return arr;
}   


//Main function
int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> left = new Node(4);
    root -> left -> right = new Node(5);
    root -> right -> left = new Node(6);
    
    vector<int>arr = inorderTraversal(root);
    for(int it: arr){
        cout << it<<" ";
    }
    return 0;
}