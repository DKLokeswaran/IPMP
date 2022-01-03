void print_reverse(struct Node* head)
{
    if(head==NULL)
        return;
    print_reverse(head->next);
    cout<<head->data;
}