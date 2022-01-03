class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        struct ListNode* temp1=l1;
        struct ListNode* temp2=l2;
        int c1=1,c2=1;
        while(temp1->next)
        {
            c1++;
            temp1=temp1->next;
        }
        while(temp2->next)
        {
            c2++;
            temp2=temp2->next;
        }
        int i;
        if(c1>c2)
            for(i=0;i<c1-c2;i++)
            {
                struct ListNode* temp=new ListNode();
                temp2->next=temp;
                temp2=temp;
            }
        else if(c1<c2)
            for(i=0;i<c2-c1;i++)
            {
                struct ListNode* temp=new ListNode();
                temp1->next=temp;
                temp1=temp;
            }
        struct ListNode* new_head=NULL;
        struct ListNode* temp_;
        int data,carry=0;
        int pos=0;
        temp1=l1;
        temp2=l2;
        while(temp1&&temp2)
        {
            data=temp1->val+temp2->val+carry;
            int car=carry;
            if(data>=10)
            {
                data-=10;
                carry=1;
            }
            else
                carry=0;
            struct ListNode* temp0=new ListNode(data);
            if(new_head)
            {
                temp_->next=temp0;
                temp_=temp0;
            }
            else
            {
                new_head=temp0;
                temp_=new_head;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        if(carry)
            temp_->next=new ListNode(1);
        return new_head;
    }
};