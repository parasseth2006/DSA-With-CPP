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

//Preorder Traversal
vector<int> preorderTraversal(Node* root) {
    vector<int>arr;
    if(root == NULL) return arr;
    stack<Node*>st;
    st.push(root);
    while(!st.empty()){
        root = st.top();
        st.pop();
        arr.push_back(root -> data);
        if(root -> right != NULL){
            st.push(root -> right);
        }
        
        if(root -> left != NULL){
            st.push(root -> left);
        }
    }
    return arr;
}


//Main function
int main(){
    Node* root = new Node(1);
    root -> left = new Node(2);
    root -> right = new Node(3);
    root -> left -> right = new Node(5);
    vector<int>arr = preorderTraversal(root);
    cout << "Preorder Traversal:\n";
    for(int it: arr){
        cout << it<<" ";
    }
    return 0;
}