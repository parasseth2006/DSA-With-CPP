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


TreeNode* ans = nullptr;
int solve(TreeNode* root, TreeNode* p, TreeNode* q){
    if(root == nullptr) return 0;
    int left = solve(root -> left, p ,q);
    int right = solve(root -> right, p, q);
    int self = 0;
    if(root == p || root == q) self = 1;
    int total = left + right + self;
    if(total == 2 && ans == nullptr){
        ans = root;
    }
    return total;
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    ans = NULL;
    solve(root ,p ,q);
    return ans;
}