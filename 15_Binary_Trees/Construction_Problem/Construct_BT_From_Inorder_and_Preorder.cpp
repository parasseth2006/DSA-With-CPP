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

int idx;
unordered_map <int,int> mpp;

TreeNode* build(vector<int>& postorder, int low, int high ){
    if(low > high) return nullptr;
    TreeNode* node = new TreeNode(postorder[idx]);
    idx--;
    int id = mpp[node -> val];
    node -> right = build(postorder, id+1, high);
    node -> left = build(postorder, low, id-1); //Build left subtree
        //Build right subtree
    return node;
}
TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
    //Store inorder elements with their index in a hashmap
    for(int i = 0; i < inorder.size(); i++){
        mpp[inorder[i]] = i;
    }
    idx = postorder.size() - 1; 
    return build(postorder, 0, inorder.size() - 1);
}

int main(){
    return 0;
}