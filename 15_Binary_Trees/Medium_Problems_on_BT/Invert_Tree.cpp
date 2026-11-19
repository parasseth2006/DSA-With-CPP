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

TreeNode* invertTree(TreeNode* root) {
    if(root == NULL) return NULL;
    TreeNode* temp = root -> left;
    root -> left = root -> right;
    root -> right = temp;
    invertTree(root -> left);
    invertTree(root -> right);
    return root;
}