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

bool flipEquiv(TreeNode* root1, TreeNode* root2) {
    //Both trees are empty
    if(root1 == nullptr && root2 == nullptr) return true;
    //If one tree is empty
    if(root1 == nullptr || root2 == nullptr) return false;
    //if val of any node is not equal
    if(root1 -> val != root2 -> val) return false;
    //Case1: No Flip 
    bool noFlip = flipEquiv(root1 -> left, root2 -> left) && 
    flipEquiv(root1 -> right, root2 -> right);
    //Case2: Flip
    bool Flip = flipEquiv(root1 -> left, root2 -> right) && 
    flipEquiv(root1 -> right, root2 -> left);
    return noFlip || Flip;        
}
int main(){
    return 0;
}