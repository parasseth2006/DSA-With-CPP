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

bool isCompleteTree(TreeNode* root) {
    queue<TreeNode*>q;
    bool nullFound = false;
    q.push(root);
    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        if(node == NULL) nullFound = true;
        else{
            if (nullFound) return false;
            q.push(node -> left);
            q.push(node -> right);
        }
    }
    return true;
}

int main(){
    return 0;
}