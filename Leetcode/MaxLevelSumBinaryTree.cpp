
// Given the root of a binary tree, the level of its root is 1, the level of its children is 2, and so on.

// Return the smallest level x such that the sum of all the values of nodes at level x is maximal.







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
    int maxLevelSum(TreeNode* root) {
        int max_sum=INT_MIN;
        int max_level=0;
        queue<TreeNode*>q;
        int curr_level=0;
        q.push(root);
        while(!q.empty()){
         int curr_sum=0;
         curr_level++;
         for(int i=q.size();i>0;i--){
          TreeNode* n=q.front();
          q.pop();
          curr_sum+=n->val;
          
          if(n->left)q.push(n->left);
          if(n->right)q.push(n->right);
          }
          if(curr_sum>max_sum){
              max_sum=curr_sum;
              max_level=curr_level;
          }
        }
        return max_level;
    }
};
