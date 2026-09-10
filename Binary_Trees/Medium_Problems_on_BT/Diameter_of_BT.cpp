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
int res = 0;
int height(TreeNode* root){
    if(root == NULL) return 0;
    int left = height(root -> left);
    int right = height(root -> right);
    res = max(res, left + right);
    return 1 + max(left, right);
}

int diameterOfBinaryTree(TreeNode* root) {
    height(root);
    return res;
}

int main(){
    return 0;
}