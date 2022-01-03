class Solution {
public:
    struct ListNode* reverse(struct ListNode* cur)
    {
        if(cur==NULL||cur->next==NULL)
            return cur;
        struct ListNode* temp=reverse(cur->next);
        cur->next->next=cur;
        cur->next=NULL;
        return temp;
    }
    bool isPalindrome(ListNode* head) {
        struct ListNode* temp=head;
        int l=0;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
        }
        temp=head;
        int key=(l%2)?l/2+1:l/2;
        for(int i=0;i<key-1;i++)
            temp=temp->next;
        struct ListNode* head2=reverse(temp->next);
        temp->next=head2;
        temp=head;
        for(int i=0;i<l/2;i++)
        {
            if(temp->val!=head2->val)
                return false;
            temp=temp->next;
            head2=head2->next;
        }
        return true;
    }
};