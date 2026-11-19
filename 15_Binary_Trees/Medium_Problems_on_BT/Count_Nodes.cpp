int countNodes(TreeNode* root) {
    if(root == NULL) return 0;
    int lh = findHeightLeft(root);
    int rh = findHeightRight(root);
    if(lh == rh) return (1 << lh) - 1;
    return 1 + countNodes(root -> left) + countNodes(root -> right);
}

int findHeightLeft(TreeNode* node){
    int ht = 0;
    while(node){
        ht++;
        node = node -> left;
    }
    return ht;
}

int findHeightRight(TreeNode* node){
    int ht = 0;
    while(node){
        ht++;
        node = node -> right;
    }
    return ht;
}