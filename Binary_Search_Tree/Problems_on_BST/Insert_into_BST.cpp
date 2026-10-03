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

TreeNode* insertIntoBST(TreeNode* root, int val) {
    if(root == NULL) return new TreeNode(val);
    TreeNode* node = root;
    while(true){
        if(val >= node -> val){
            if(node -> right != NULL) node = node -> right;
            else{
                node -> right = new TreeNode(val);
                break;
            }
        }
        else {
            if(node -> left != NULL) node = node -> left;
            else{
                node -> left = new TreeNode(val);
                break;
            }
        }
    }
    return root;
}

int main(){
    return 0;
}