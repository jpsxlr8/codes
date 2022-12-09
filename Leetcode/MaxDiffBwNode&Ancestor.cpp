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
    int max_val=INT_MIN;
    vector<int>v;
    void dfs(TreeNode* root){
        if(!root) return;
        v.push_back(root->val);
        if(root->left) dfs(root->left);
        if(root->right) dfs(root->right);
        v.pop_back();
        for(int i:v){
            max_val=max(max_val,abs(i-root->val));
        }
    }
    int maxAncestorDiff(TreeNode* root) {
        dfs(root);
        return max_val;
    }
};
