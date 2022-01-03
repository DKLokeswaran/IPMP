class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        struct ListNode* temp1=headA;
        struct ListNode* temp2=headB;
        int l1=0,l2=0;
        while(temp1!=NULL)
        {
            l1++;
            temp1=temp1->next;
        }
        while(temp2!=NULL)
        {
            l2++;
            temp2=temp2->next;
        }
        int key;
        temp1=headA;
        temp2=headB;
        if(l1>l2)
        {
            key=l1-l2;
            for(int i=0;i<key;i++)
                temp1=temp1->next;
        }
        else
        {
            key=l2-l1;
            for(int i=0;i<key;i++)
                temp2=temp2->next;
        }
        while(temp1!=NULL&&temp2!=NULL)
        {
            if(temp1==temp2)
                return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        return NULL;
    }
};