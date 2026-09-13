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

int widthOfBinaryTree(TreeNode* root) {
    if(root == NULL) return 0;
    int ans = 0;
    queue<pair<TreeNode*, int>> q;
    q.push({root, 0});
    while(!q.empty()){
        int size = q.size();
        int mmin = q.front().second;
        int first, last;
        for(int i = 0; i < size; i++){
            long long cur_id = q.front().second - mmin;
            TreeNode* node = q.front().first;
            q.pop();
            if(i == 0) first = cur_id;
            if(i == size - 1) last = cur_id;
            if(node -> left) q.push({node -> left, cur_id*2+1});
            if(node -> right) q.push({node -> right, cur_id*2+2});
        }
        ans = max(ans, last - first + 1);
    }
    return ans;
}

int main(){
    return 0;
}