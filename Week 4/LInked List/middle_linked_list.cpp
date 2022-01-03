ListNode* middleNode(ListNode* head) {
        struct ListNode* temp=head;
        int l=0;
        while(temp!=NULL)
        {
            l++;
            temp=temp->next;
        }
        temp=head;
        for(int i=0;i<l/2;i++)
            temp=temp->next;
        return temp;
    }