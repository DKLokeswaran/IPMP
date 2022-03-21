void reverse(string str, int n)
{
    cout<<str[n-1];
    if(n>0)
        reverse(str,n-1);
}