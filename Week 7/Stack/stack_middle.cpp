#include <iostream>

using namespace std;
struct Node
{
    int data;
    struct Node* prev;
    struct Node* next;
    Node(int data)
    {
        this->data=data;
        prev=NULL;
        next=NULL;
    }
};
class DLL
{
    struct Node* head;
    public:
        DLL()
        {
            head=NULL;
        }
        void insert_before(struct Node* ref,int data);
        void del(struct Node* ref);
        struct Node* get_head();
};
void DLL::insert_before(struct Node* ref,int data)
{
    struct Node* temp=new Node(data);
    if(!head)
        head=temp;
    else if(!ref)
    {
        struct Node* temp0=head;
        while(temp0->next)
            temp0=temp0->next;
        temp->next=ref;
        temp->prev=temp0;
        temp0->next=temp;
    }
    else
    {
        if(ref->prev)
            ref->prev->next=temp;
        temp->prev=ref->prev;
        temp->next=ref;
        ref->prev=temp;
        if(!temp->prev)
            head=temp;
    }
}

void DLL::del(struct Node* ref)
{
    if(!(ref&&head))
        return;
    if(ref->prev)
        ref->prev->next=ref->next;
    else
        head=ref->next;
    if(ref->next)
        ref->next->prev=ref->prev;
    free(ref);
}
struct Node* DLL::get_head()
{
    return head;
}
class Stack
{
    DLL dll;
    int size;
    struct Node* top;
    struct Node* mid;
    public:
        Stack()
        {
            top=mid=NULL;
            size=0;
        }
        void push(int data);
        int pop();
        int find_mid();
        int del_mid();
};
void Stack::push(int data)
{
    size++;
    dll.insert_before(top,data);
    if(!top)
        mid=dll.get_head();
    top=dll.get_head();
    if(size%2==0)
        mid=mid->prev;
}
int Stack::pop()
{
    if(!top)
        return 0;
    size--;
    int data=top->data;
    dll.del(top);
    top=dll.get_head();
    if(!dll.get_head())
        top=mid=NULL;
    if(size%2)
        mid=mid->next;
    return data;
}
int Stack::find_mid()
{
    if(!mid)
        return 0;
    return mid->data;
}
int Stack::del_mid()
{
    if(!mid)
        return 0;
    size--;
    int data=mid->data;
    struct Node* temp=mid;
    if(size%2)
        mid=mid->next;
    else
        mid=mid->prev;
    dll.del(temp);
    return data;
}

int main()
{
    Stack stack;
    while(1)
    {
        cout<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Mid"<<endl<<"4. Delete Mid"<<endl;
        int n,data;
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"ENter data: ";
                cin>>data;
                stack.push(data);
                break;
            case 2:
                cout<<stack.pop();
                break;
            case 3:
                cout<<stack.find_mid();
                break;
            case 4:
                cout<<stack.del_mid();
                break;
            case 5:exit(0);
            default:cout<<"Enter corect choice";
        }
    }
    return 0;
}