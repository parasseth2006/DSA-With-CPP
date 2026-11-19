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

int minDepth(TreeNode* root) {
    if(root == NULL) return 0;
    int lh = minDepth(root -> left);
    int rh = minDepth(root -> right);
    if(root -> left == NULL) return 1 + rh;
    if(root -> right == NULL) return 1 + lh;
    return 1 + min(lh, rh);
}

int main(){
    return 0;
}