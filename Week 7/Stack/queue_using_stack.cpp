#include <iostream>
#include<stack>
using namespace std;
class Queue
{
    stack<int> s1,s2;
    int last;
    public:
        void enqueue(int data);
        int dequeue();
        int front();
        int back();
        bool is_empty();
};

bool Queue::is_empty()
{
    return s1.empty();
}
void Queue::enqueue(int data)
{
    last=data;
    while(!s1.empty())
    {
        int temp=s1.top();
        s1.pop();
        s2.push(temp);
    }
    s1.push(data);
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
}
int Queue::dequeue()
{
    if(is_empty())
        return 0;
    else
    {
        int temp=s1.top();
        s1.pop();
        return temp;
    }
}
int Queue::front()
{
    if(is_empty())
        return 0;
    return s1.top();
}
int Queue::back()
{
    if(is_empty())
        return 0;
    return last;
}


int main()
{
    Queue queue;
    while(1)
    {
        cout<<endl<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Front"<<endl<<"4.Back"<<endl;
        int n,data;
        cin>>n;
        switch(n)
        {
            case 1:
                cout<<"ENter data: ";
                cin>>data;
                queue.enqueue(data);
                break;
            case 2:
                cout<<queue.dequeue();
                break;
            case 3:
                cout<<queue.front();
                break;
            case 4:
                cout<<queue.back();
                break;
            case 5:exit(0);
            default:cout<<"Enter correct choice";
        }
    }
    return 0;
}