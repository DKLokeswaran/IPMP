#include <iostream>
#include<queue>

using namespace std;
class Stack
{
    queue<int> q1,q2;
    int size;
    public:
        void push(int data);
        int pop();
        int peek();
        bool is_empty();
};
bool Stack::is_empty()
{
    return q1.empty();
}

void Stack::push(int data)
{
    q2.push(data);
    while(!q1.empty())
    {
        int temp=q1.front();
        q2.push(temp);
        q1.pop();
    }
    queue<int> temp=q2;
    q2=q1;
    q1=temp;
}
int Stack::pop()
{
    if(is_empty())
        return 0;
    else
    {
        int temp=q1.front();
        q1.pop();
        return temp;
    }
}
int Stack::peek()
{
    if(is_empty())
        return 0;
    return q1.front();
}

int main()
{
    Stack stack;
    while(1)
    {
        cout<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Peek"<<endl;
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
                cout<<stack.peek();
                break;
            case 4:exit(0);
            default:cout<<"Enter corect choice";
        }
    }
    return 0;
}