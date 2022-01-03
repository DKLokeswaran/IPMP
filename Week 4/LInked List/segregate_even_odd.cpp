class Solution{
public:
    Node* divide(int N, Node *head){
        struct Node* prev=head;
        struct Node* cur=head->next;
        struct Node* new_head=(head->data%2)?NULL:head;
        struct Node* temp_=new_head;
        while(cur)
        {
            if(cur->data%2)
            {
                prev=cur;
                cur=cur->next;
            }
            else
            {
                
                if(!temp_)
                {
                   prev->next=cur->next;
                   cur->next=head;
                   new_head=cur;
                   temp_=cur;
                   cur=prev->next;
                }
                else
                {
                    if(temp_->next!=cur)
                    {
                        prev->next=cur->next;
                        cur->next=temp_->next;
                        temp_->next=cur;
                        cur=prev->next;
                    }
                    else
                    {
                        prev=cur;
                        cur=cur->next;
                    }
                    temp_=temp_->next;
                }
                
            }
        }
        return (new_head)?new_head:head;
    }
};