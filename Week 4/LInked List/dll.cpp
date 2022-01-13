#include <iostream>

using namespace std;

struct Node
    {
    int data;
    Node* xor_add;
    Node(int val)
    {
        data=val;
        xor_add=NULL;
    }
};
Node* Xor(Node* x, Node* y)
{
    return reinterpret_cast<Node*>(
        reinterpret_cast<uintptr_t>(x)
        ^ reinterpret_cast<uintptr_t>(y));
}
    
class DLL
{
    struct Node* head;
    public:
        DLL(int val)
        {
            head= new Node(val);
            head->xor_add=NULL;
        }
        void insert(int val);
        void print();
};


void DLL::insert(int val)
{
    struct Node* temp=new Node(val);
    head->xor_add=Xor(head->xor_add,temp);
    temp->xor_add=head;
    head=temp;
}

void DLL::print()
{
    struct Node* prev=NULL;
    struct Node* cur=head;
    struct Node* temp;
    while(cur)
    {
        cout<<cur->data<<" ";
        temp=Xor(prev,cur->xor_add);
        prev=cur;
        cur=temp;
    }
}

int main()
{
    
    DLL list1= DLL(1);
    while(1)
    {
        cout<<endl<<"1.Insertion"<<endl<<"2.Print"<<endl<<"3.Exit"<<endl;
        int n;
        cin>>n;
        switch(n)
        {
            case 1:
                int val;
                cout<<"Enter data: ";
                cin>>val;
                list1.insert(val);
                break;
            case 2:
                list1.print();
                break;
            case 3:
                exit(0);
                break;
            default:
                cout<<"Wrong choice";
        }
    }

    return 0;
}
