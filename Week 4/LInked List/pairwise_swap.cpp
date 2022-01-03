class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(!(head&&head->next))
            return head;
        struct Node* prev=head;
        struct Node* cur=head->next;
        prev->next=cur->next;
        cur->next=prev;
        struct Node* new_head=cur;
        while(prev->next&&prev->next->next)
        {
           cur=prev->next->next;
           prev->next->next=cur->next;
           cur->next=prev->next;
           prev->next=cur;
           prev=cur->next;
        }
        return new_head;
    }
};