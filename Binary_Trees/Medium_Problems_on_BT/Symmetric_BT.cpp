#include <iostream>
#include <vector>
#include <queue>
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

//Function to check if trees are mirror img 
bool isMirror(TreeNode* root1, TreeNode* root2){
    if(root1 == NULL && root2 == NULL) return true;
    if(root1 == NULL || root2 == NULL) return false;
    if(root1 -> val != root2 -> val) return false;
    bool r1 = isMirror(root1 -> left, root2 -> right);
    bool r2 = isMirror(root1 -> right, root2 -> left);
    return r1 && r2;
}


//function to check if trees are symmetric
bool isSymmetric(TreeNode* root) {
    return isMirror(root -> left, root -> right);
}