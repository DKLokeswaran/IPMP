class Solution {
public:
    ListNode* reverse(ListNode* head, ListNode* last)
    {
        if(!head||!head->next||head==last)
            return head;
        struct ListNode* temp=reverse(head->next,last);
        head->next->next=head;
        head->next=NULL;
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        struct ListNode* temp=head;
        int l=0;
        int count=0;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        int key=l/k;
        temp=head;
        for(int i=0;i<k-1;i++)
            temp=temp->next;
        struct ListNode* new_head=temp;
        temp=head;
        struct ListNode* last=head;
        struct ListNode* last_prev;
        struct ListNode* front_prev=NULL;
        for(int i=0;i<key;i++)
        {
            for(int i=0;i<k-1;i++)
                last=last->next;
            struct ListNode* temp0=last->next;
            if(count%2==0)
            {
                struct ListNode* temp_head=reverse(temp,last);
                temp->next=temp0;
                if(front_prev)
                    front_prev->next=last;
                front_prev=temp;
                count++;
            }
            else
                front_prev=last;
            last=temp=temp0;
        }
        return new_head;
    }
};