class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        struct ListNode* temp=head;
        int l=1;
        if(!temp||!temp->next)
            return temp;
        while(temp->next)
        {
            temp=temp->next;
            l++;
        }
        k%=l;
        if(!k)
            return head;
        struct ListNode* last=head;
        for(int i=0;i<l-k-1;i++)
            last=last->next;
        struct ListNode* ans=last->next;
        last->next=NULL;
        temp->next=head;
        head=ans;
        return ans;
    }
};