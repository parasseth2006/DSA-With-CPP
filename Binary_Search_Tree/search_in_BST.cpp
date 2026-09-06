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

//Function to search element in BST
TreeNode* searchBST(TreeNode* root, int val) {
    if(root == nullptr) return NULL;
    if(root -> val < val){
        return searchBST(root -> right, val);
    }
    else if(root -> val > val){
        return searchBST(root -> left, val);
    }
    else return root;
}