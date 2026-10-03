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

void inorder(TreeNode* root, vector<int>&ans){
    if(root == NULL) return;
    inorder(root -> left, ans);
    ans.push_back(root -> val);
    inorder(root -> right, ans);
}
int kthSmallest(TreeNode* root, int k) {
    vector<int>ans;
    inorder(root, ans);
    int res = ans[k-1];
    return res;
}

int main(){
    return 0;
}