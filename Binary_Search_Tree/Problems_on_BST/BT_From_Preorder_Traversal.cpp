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

TreeNode* bstFromPreorder(vector<int>& preorder) {
    int i = 0;
    return build(preorder, i , INT_MAX);
}
TreeNode* build(vector<int>& preorder, int &i, int bound){
    if(i == preorder.size() || preorder[i] > bound) return NULL;
    TreeNode* root = new TreeNode(preorder[i++]);
    root -> left = build(preorder, i, root -> val);
    root -> right = build(preorder, i , bound);
    return root;
}

int main(){
    return 0;
}