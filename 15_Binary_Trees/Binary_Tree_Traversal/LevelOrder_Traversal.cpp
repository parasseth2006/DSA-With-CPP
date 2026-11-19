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

//Levelorder Traversal
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>>ans;
    if(root == NULL) return ans;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int>level;
        for(int i = 0; i < size; i++){
            TreeNode* node = q.front();
            q.pop();
            if(node -> left != NULL) q.push(node -> left);
            if(node -> right != NULL) q.push(node -> right);
            level.push_back(node -> val);
        }
        ans.push_back(level);
    }
    return ans;
}


//Main function
int main(){
    TreeNode* root = new TreeNode(1);
    root -> left = new TreeNode(2);
    root -> right = new TreeNode(3);
    root -> left -> left = new TreeNode(4);
    root -> left -> right = new TreeNode(5);
    vector<vector<int>>ans = levelOrder(root);
    cout << '[';
    for(auto it: ans){
        cout << '[';
       for(int num : it){
        cout <<" "<< num <<" " ;
       }
       cout << ']';
    }
    cout << ']';
    return 0;
}