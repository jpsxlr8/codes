/*struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};*/


class Solution {
public:
    int solve(Node* root,int &ans){
        if(!root->left && !root->right){
            return root->data;
        }
        int ls=INT_MIN,rs=INT_MIN;
        if(root->left)
         ls=solve(root->left,ans);
        if(root->right)
         rs=solve(root->right,ans);
        if(ls!=INT_MIN && rs!=INT_MIN)
         ans=max(ans,ls+rs+root->data);
        return root->data+max(ls,rs);
    }
    int maxPathSum(Node* root)
    {
        int ans=INT_MIN;
        int res=solve(root,ans);
        if(!root->left || !root->right){
            ans=max(res,ans);
        }
        return ans;
        
    }
};