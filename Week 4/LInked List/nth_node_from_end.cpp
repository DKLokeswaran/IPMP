int getNthFromLast(Node *head, int n)
{
   struct Node* temp=head;
   int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    temp=head;
    if(n>len)
        return -1;
    for(int i=1;i<len-n+1;i++)
        temp=temp->next;
    return temp->data;
    
}

