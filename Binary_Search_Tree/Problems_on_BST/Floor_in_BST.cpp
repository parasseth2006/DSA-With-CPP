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

int findMaxFork(TreeNode* root, int k) {
    int floor = -1;
    while(root){
        if(root -> data == k){
            floor = root -> data;
            return floor;
        }
        if(k > root -> data){
            floor = root -> data;
            root = root -> right;
        }
        else{
            
            root = root -> left;
        }
    }
    return floor;
}

int main(){
    return 0;
}