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
public:
    int sum=0;
    int inorder(TreeNode* root,int low,int high){
        if(!root) return 0;
        inorder(root->left,low,high);
        if(root->val>=low && root->val<=high)
        sum+=root->val;
        inorder(root->right,low,high);
        return sum;
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(!root) return 0;
        return inorder(root,low,high);
    }
};
