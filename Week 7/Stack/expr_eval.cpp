#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    switch(op)
    {
        case '+':
        case '-':return 1;
        case '*':
        case '/': return 2;
        default : return 0;
    }
}

int operation(int a,int b,char op)
{
    switch(op)
    {
        case '+':return a+b;
        case '-':return a-b;
        case '*':return a*b;
        case '/':return a/b;
    }
}

int evaluate(string ques)
{
    stack<int> val;
    stack<char> ops;
    for(int i=0;i<ques.length();i++)
    {
        if(ques[i]==' ')
            continue;
        else if(ques[i]=='(')
        {
            ops.push(ques[i]);
        }
        else if(isdigit(ques[i]))
        {
            int res=0;
            while(i<ques.length()&&isdigit(ques[i]))
            {
                res=res*10+ques[i]-48;
                i++;
            }
            val.push(res);
            i--;
        }
        else if(ques[i]==')')
        {
            while(!ops.empty()&&ops.top()!='(')
            {
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                char op=ops.top();
                ops.pop();
                val.push(operation(val1,val2,op));
            }
            if(!ops.empty())
                ops.pop();
        }
        else
        {
            while(!ops.empty()&&precedence(ops.top())>=precedence(ques[i]))
            {
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                char op=ops.top();
                ops.pop();
                val.push(operation(val1,val2,op));
            }
            ops.push(ques[i]);
        }
    }
    while(!ops.empty())
    {
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        char op=ops.top();
        ops.pop();
        val.push(operation(val1,val2,op));
    }
    return val.top();
}

int main()
{
    string s;
    cout<<"Please Enter correct String:";
    cin>>s;
    cout<<endl<<evaluate(s);
    return 0;
}