
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

// This function should return head to the DLL
class Solution
{
    public: 
    //Function to convert binary tree to doubly linked list and return it->
    // Node* head=NULL;

    // Node* temp=NULL;
    // public void inorder(Node* root)

    // {

    //     if(root==NULL) return;

    //     inorder(root->left);

    //     if(head==NULL)

    //     {

    //         head=root;

    //         temp=root;

    //     }

    //     else

    //     {

    //         temp->right=root;

    //         root->left=temp;

    //         temp=temp->right;

    //     }

    //     inorder(root->right);

    // }
    Node* prev=NULL;
    Node * bToDLL(Node *root)
    {
      if(root==NULL)
      return root;
           Node* head = bToDLL(root->left);
        //processing
        if(prev==NULL)
            head = root;
        else
        {
            root->left = prev;
            prev->right = root;
        }
        prev = root;
        bToDLL(root->right);
        return head;
      
    }
};
