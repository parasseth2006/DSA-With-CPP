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

vector<vector<int>>ans;
vector<int>temp;
void func(TreeNode* root, int sum, int targetSum){
    if(root == NULL) return;
    sum += root -> val;
    temp.push_back(root -> val);
    if(root -> left == NULL && root -> right == NULL){
        if(sum == targetSum){
            ans.push_back(temp);
        }
    }
    func(root -> left, sum, targetSum);
    func(root -> right, sum, targetSum);
    temp.pop_back();
}
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    func(root, 0, targetSum);
    return ans;
}
int main(){
    return 0;
}