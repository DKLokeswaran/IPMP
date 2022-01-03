void deleteAlt(struct Node *head){
    struct Node* temp=head;
    struct Node* tem;
    while(temp&&temp->next)
    {
        tem=temp->next;
        temp->next=tem->next;
        free(tem);
        temp=temp->next;
    }
}