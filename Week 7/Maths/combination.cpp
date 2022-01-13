int combination(int n,int r)
{
    if(n-r<r)
        r=n-r;
    int res=1;
    for(int i=1;i<=r;i++)
    {
        res*=n-i+1;
        res/=i;
    }
    return res;
}