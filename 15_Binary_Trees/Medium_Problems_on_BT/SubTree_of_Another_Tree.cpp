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


bool isSame(TreeNode* r1, TreeNode* r2){
    if(r1 == nullptr && r2 == nullptr) return true;
    if(r1 == nullptr || r2 == nullptr) return false;
    if(r1 -> val != r2 -> val) return false;
    bool p = isSame(r1 -> left, r2 -> left);
    bool q = isSame(r1 -> right, r2 -> right);
    return p && q;
} 

bool isSubtree(TreeNode* root, TreeNode* subRoot) {
    if(root == nullptr) return false;
    if(isSame(root, subRoot)) return true;
    return isSubtree(root -> left, subRoot) || isSubtree(root -> right, subRoot);
}