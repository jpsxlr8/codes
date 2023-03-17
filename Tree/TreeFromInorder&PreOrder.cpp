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
    int idx=0;
    TreeNode* buildTreeUtil(vector<int>& preorder,vector<int>&inorder,int left,int right){
        if(left>right) return NULL;
        TreeNode* root= new TreeNode(preorder[idx]);
        idx++;
        int pivot;
        for(int i=left;i<=right;i++){
            if(inorder[i]==root->val){
                pivot=i;
                break;
            }
        }
        root->left=buildTreeUtil(preorder,inorder,left,pivot-1);
        root->right=buildTreeUtil(preorder,inorder,pivot+1,right);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans=buildTreeUtil(preorder,inorder,0,inorder.size()-1);
        return ans;
    }
};
