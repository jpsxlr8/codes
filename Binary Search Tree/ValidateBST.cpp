/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {

private:
    vector<int>tree;
    
public:
    void preorder(TreeNode* root){
        if(!root) return;
        preorder(root->left);
        tree.push_back(root->val);
        
        preorder(root->right);
    }

    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        preorder(root);//since preorder traversal gives the node in increasing order
        for(int i=0;i<tree.size()-1;i++){
            if(tree[i+1]<=tree[i]) return false;
        }
        return true;
    }
};
