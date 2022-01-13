class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        struct Node* prev=head;
        bool isNull=false;
        while(!isNull)
        {
            for(int i=1;i<M;i++)
            {
                if(!prev)
                    return;
                prev=prev->next;
            }
            if(!prev)
                return;
            struct Node* cur=prev->next;
            struct Node* next_first=cur;
            if(!cur)
                return;
            struct Node* temp;
            for(int i=1;i<=N;i++)
            {
                temp=next_first;
                next_first=next_first->next;
                free(temp);
                if(!next_first)
                {
                    isNull=true;
                    break;
                }
            }
            prev->next=next_first;
            prev=next_first;
        }
    }
};