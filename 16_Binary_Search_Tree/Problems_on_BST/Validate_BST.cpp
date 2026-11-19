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

bool ans = true;
TreeNode* prev = nullptr;
void inorder(TreeNode* root){
    if(root == NULL) return;
    inorder(root -> left);
    if(prev == NULL) prev = root;
    else{
        if(root -> val <= prev -> val) ans = false;
        prev = root;
    }
    inorder(root -> right);

}

bool isValidBST(TreeNode* root) {
    inorder(root);
    return ans;
}

int main(){
    return 0;
}