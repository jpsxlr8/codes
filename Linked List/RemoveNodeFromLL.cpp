// structure of linked list node:

// struct Node
// {
//     int data;
//     Node* next;
    
//     Node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// */

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // we'll take two pointers pointing to the head
        Node* low=head;
        Node* high=head;
        while(low!=NULL && high!=NULL && high->next!=NULL){
            low=low->next;
            high=high->next->next;
            if(low==high)
            break;
        }
        if(low==head){ // it means the case when loop contains the head node
            while(high->next!=low){
               high=high->next; // we've got the node which is pointing to the head
              
            }
            high->next=NULL;
        }
        else if(low==high){
            low=head;
            while(low->next!=high->next){
                low=low->next;
                high=high->next;
            }
            high->next=NULL; //since high will be pointing to intersection point
        }
        
    }
};
