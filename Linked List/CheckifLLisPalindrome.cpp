/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
       stack<int>st;
       bool flag=true;
       Node* curr=head;
       
       while(curr!=NULL){
          st.push(curr->data);
          curr=curr->next;
       }
       
       curr=head;
       while(curr!=NULL){
           if(curr->data!=st.top()){
               flag=false;
           }
           curr=curr->next;
           st.pop();
       }
       return flag;
       
       
       
    }
};
