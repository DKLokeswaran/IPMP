void alternatingSplitList(struct Node* head) 
{
    if(!head)
        return;
    a=new Node(head->data);
    if(!head->next)
        return;
    b=new Node(head->next->data);
    struct Node* tempa=a;
    struct Node* tempb=b;
    if(!head->next->next)
        return;
    struct Node* temp=head->next->next;
    struct Node* temp_;
    int count=0;
    while(temp)
    {
        temp_=new Node(temp->data);
        if(count%2)
        {
            tempb->next=temp_;
            tempb=temp_;
        }
        else
        {
            tempa->next=temp_;
            tempa=temp_;
        }
        temp=temp->next;
        count++;
    }
}