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

void traversal(TreeNode* node, int level, vector<int>&res){
    if(node == NULL) return;
    if(level == res.size()) res.push_back(node -> val);
    traversal(node -> right, level + 1, res);
    traversal(node -> left, level + 1, res);
}
vector<int> rightSideView(TreeNode* root) {
    vector<int>res;
    traversal(root, 0, res);
    return res;
}

int main(){
    return 0;
}