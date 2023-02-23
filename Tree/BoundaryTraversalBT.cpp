// Boundary traversal of a binary tree
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution {
public:
    void leftprint(Node* root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        ans.push_back(root->data);
        if(root->left)leftprint(root->left,ans);
        else{
            leftprint(root->right,ans);
        }
    }
    void leafprint(Node* root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leafprint(root->left,ans);
        leafprint(root->right,ans);
        
    }
    void rightprint(Node* root,vector<int>&ans){
        if(root==NULL) return;
        if(root->left==NULL && root->right==NULL) return;
        if(root->right) rightprint(root->right,ans);
        else{ rightprint(root->left,ans);}
        ans.push_back(root->data);
        
    }
    vector<int>boundary(Node *root)
    {
      vector<int>ans;
      if(root==NULL) return ans;
      ans.push_back(root->data);
      leftprint(root->left,ans);
      leafprint(root->left,ans);
      leafprint(root->right,ans);
      rightprint(root->right,ans);
      return ans;
      }
};

