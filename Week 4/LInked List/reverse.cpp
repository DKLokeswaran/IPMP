class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if(head==NULL||head->next==NULL)
            return head;
        struct Node* prev=NULL;
        struct Node* nex=head->next;
        struct Node* cur=head;
        while(cur->next!=NULL)
        {
            cur->next=prev;
            prev=cur;
            cur=nex;
            nex=nex->next;
        }
        cur->next=prev;
        return cur;
    }
    
};
    

