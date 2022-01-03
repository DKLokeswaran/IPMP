Node* findIntersection(Node* head1, Node* head2)
{
    struct Node* temp1=head1;
    struct Node* temp2=head2;
    struct Node* head3;
    struct Node* prev;
    struct Node* temp;
    bool is_first_element=true;
    while(temp1!=NULL&&temp2!=NULL)
    {
        if(temp1->data>temp2->data)
            temp2=temp2->next;
        else if(temp1->data<temp2->data)
            temp1=temp1->next;
        else
        {
            if(is_first_element)
            {
                head3=new Node(temp1->data);
                prev=head3;
                is_first_element=false;
            }
            else
            {
                 temp=new Node(temp1->data);
                 prev->next=temp;
                 prev=temp;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return head3;
}