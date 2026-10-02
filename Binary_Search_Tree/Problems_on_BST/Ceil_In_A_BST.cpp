#include <iostream>
#include <vector>
using namespace std;

//Node Structure
struct TreeNode{
    int val;
    TreeNode* left; 
    TreeNode* right; 
    TreeNode(int value){
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

int findCeil(Node* root, int x) {
    // code here
    int ceil = -1;
    while(root){
        if(root -> data == x){
            ceil = root -> data;
        }
        if(x > root -> data){
            root = root -> right;
        }
        else{
            ceil = root -> data;
            root = root -> left;
        }
    }
    return ceil;
}

int main(){
    return 0;
}