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

int maxPathDown(TreeNode* root, int &maxSum){
    if(root == NULL) return 0;
    int left = max(0, maxPathDown(root -> left, maxSum));
    int right = max(0, maxPathDown(root -> right, maxSum));
    maxSum = max(maxSum, left + right + root -> val);
    return max(left, right) + root -> val;
}
int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN;
    maxPathDown(root, maxSum);
    return maxSum;
}
int main(){
    return 0;
}