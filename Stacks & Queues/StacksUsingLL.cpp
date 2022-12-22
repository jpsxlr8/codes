//Function to push an integer into the stack.
void MyStack ::push(int x) 
{
    StackNode *t=new StackNode(x);
    t->next=top;
    top=t;
}

//Function to remove an item from top of the stack.
int MyStack ::pop() 
{
    if(top==NULL){
        return -1;
    }else{
        StackNode *ptr=top;
        top=top->next;
        ptr->next=NULL;
        return(ptr->data);
    }
}
