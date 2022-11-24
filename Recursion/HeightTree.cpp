int maxHeight(TreeNode* root){
    if(root==NULL){
    return 0;
    }

    int lh=maxHeight(root->left); // recursively call the function for left subtree
    int rh=maxHeight(root->right); // recursively call the function for right subtree
    
    return 1+max(lh,rh); // since we've to calculate height from root that's why we've added 1
}