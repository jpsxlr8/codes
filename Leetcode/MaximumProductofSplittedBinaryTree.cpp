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
const int mod=1e9+7;
vector<long long int>ans;
    long long int dfs(TreeNode* root){
     if(root==NULL) return 0;
     long long int res=dfs(root->left)+root->val+dfs(root->right);
     ans.push_back(res);
     return res;
    }
    int maxProduct(TreeNode* root) {
        dfs(root);
        long long max_val=0;
        long long total_sum=ans[ans.size()-1];
        for(int i=0;i<ans.size();i++){
           long long r=(long long)(total_sum-ans[i]);
           long long res=(long long)ans[i]*r;
           max_val=max(max_val,res);
         }
         return max_val%mod;
    }
};
