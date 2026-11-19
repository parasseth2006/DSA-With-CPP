#include <iostream>
#include <vector>
using namespace std;

//Structure to define tree
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

//Function to Create User defined Input Tree
Node* createTree(){
    cout<<"Enter value: ";
    int val;
    cin >> val;
    Node* root = new Node(val);
    char choice;
    cout << "Do you want to go left of " << val << "?(y/n): ";
    cin >> choice;
    if(choice == 'y'){
        root -> left = createTree();
    }
    cout << "Do you want to go right of " << val << "?(y/n): ";
    cin >> choice;
    if(choice == 'y'){
        root -> right = createTree();
    }
    return root;
}

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

//Main Function
int main(){
    Node* root = createTree();
    vector<int>arr = preorderTraversal(root);
    for(auto it : arr){
        cout << it << "  ";
    }
    return 0;
}