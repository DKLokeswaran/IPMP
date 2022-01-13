#include <iostream>

using namespace std;
class Stack
{
    int * arr;
    int max_size,top1,top2,size1,size2;
    public:
        Stack(int max)
        {
            arr=new int[max]();
            max_size=max;
            top1=-1;
            top2=max_size;
        }
        bool is_full();
        void push1(int data);
        void push2(int data);
        int pop1();
        int pop2();
        int peek1();
        int peek2();
        bool is_empty1();
        bool is_empty2();
};

bool Stack:: is_full()
{
    return top2==top1+1;
}
bool Stack::is_empty1()
{
    return top1==-1;
}
bool Stack::is_empty2()
{
    return top1==max_size;
}
void Stack::push1(int data)
{
    if(is_full())
        return;
    else
        arr[++top1]=data;
}
void Stack::push2(int data)
{
    if(is_full())
        return;
    else
        arr[--top2]=data;
}
int Stack::pop1()
{
    if(is_empty1())
        return 0;
    else
        return arr[top1--];
}
int Stack::pop2()
{
    if(is_empty2())
        return 0;
    else
        return arr[top2++];
}
int Stack::peek1()
{
    if(is_empty1())
        return 0;
    else
        return arr[top1];
}
int Stack::peek2()
{
    if(is_empty2())
        return 0;
    else
        return arr[top2];
}

int main()
{
    Stack stack= Stack(10);
    while(1)
    {
        cout<<endl<<"1.Push-1"<<endl<<"2.Push-2"<<endl<<"3.Pop-1"<<endl<<"Pop-2"<<endl<<"Peek-1"<<endl<<"Peek-2"<<endl;
        int n,data;
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"Enter data: ";
                cin>>data;
                stack.push1(data);
                break;
            case 2:
                cout<<"Enter data: ";
                cin>>data;
                stack.push2(data);
                break;
            case 3:
                cout<<stack.pop1();
                break;
            case 4:
                cout<<stack.pop2();
                break;
            case 5:
                cout<<stack.peek1();
                break;
            case 6:
                cout<<stack.peek2();
                break;
            case 7:
                exit(0);
            default:cout<<"Enter correct option";
        }
    }

    return 0;
}
