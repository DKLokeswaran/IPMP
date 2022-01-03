void delete_list(struct Node* head)
{
    if(head==NULL)
        return;
    delete_list(head->next);
    free(head);
}