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

//Function to calculate maxdepth
int maxDepth(TreeNode* root) {
    if(root == NULL){
        return 0;
    }
    int lh = maxDepth(root -> left);
    int rh = maxDepth(root -> right);
    return 1 + max(lh, rh);
}

int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    int ans = maxDepth(root);
    cout << ans;
    return 0;
}