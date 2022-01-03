class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        struct ListNode* head1=list1;
        struct ListNode* head2=list2;
        struct ListNode* head_new;
        if(!head1)
            return head2;
        if(!head2)
            return head1;
        if(head1->val>head2->val)
        {
            head_new=new ListNode(head2->val);
            head2=head2->next;
        }
        else
        {
            head_new=new ListNode(head1->val);
            head1=head1->next; 
        }    
        struct ListNode* temp=head_new;
        while(head1&&head2)
        {
            struct ListNode* temp0;
            if(head1->val>head2->val)
            {
                temp0=new ListNode(head2->val);
                head2=head2->next;
            }
            else
            {
                temp0=new ListNode(head1->val);
                head1=head1->next; 
            } 
            temp->next=temp0;
            temp=temp0;
        }
        while(head1)
        {
            temp->next=head1;
            temp=temp->next;
            head1=head1->next;
        }
        while(head2)
        {
            temp->next=head2;
            temp=temp->next;
            head2=head2->next;
        }
        return head_new;
    }
};