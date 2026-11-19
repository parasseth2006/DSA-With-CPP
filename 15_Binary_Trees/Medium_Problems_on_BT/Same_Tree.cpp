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

//Function to check if trees are same
bool isSameTree(TreeNode* p, TreeNode* q) {
    if(p == NULL && q == NULL) return true;
    if(p == NULL || q == NULL) return false;
    if(p -> val != q -> val) return false;
    bool r1 = isSameTree(p -> left, q -> left);
    bool r2 = isSameTree(p -> right, q -> right);
    if(r1 && r2 == true) return true;
    return false;
}

  