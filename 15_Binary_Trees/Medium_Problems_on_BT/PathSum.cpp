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
bool ans = false;
void func(TreeNode* root, int sum, int targetSum){
    if(root == NULL) return ;
    sum += root -> val;
    if(root -> left == NULL && root -> right == NULL){
        if(sum == targetSum)  ans = true;
        return;
    }
    func(root -> left, sum, targetSum);
    func(root -> right, sum, targetSum);
    
}
bool hasPathSum(TreeNode* root, int targetSum) {
    func(root, 0, targetSum);
    return ans;
}

int main(){
    return 0;
}