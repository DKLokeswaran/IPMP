void mergeList(struct Node **p, struct Node **q)
{
    struct Node* first=*p;
    struct Node* second=*q;
    while(first&&second)
    {
        struct Node* first_next=first->next;
        struct Node* second_next=second->next;
        first->next=second;
        second->next=first_next;
        first=first_next;
        second=second_next;
    }
    *q=second;
}