class Solution
{
    public:
        int findFloor(vector<long long> v, long long n, long long x){
        
        int l=0;
        int r=n-1;
        if(x<v[0])
            return -1;
        if(x>=v[r])
            return r;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(((v[mid]>x)&&(v[mid-1]<x))||(v[mid-1]==x))
                return mid-1;
            else if(((v[mid]<x)&&(v[mid+1]>x))||(v[mid]==x))
                return mid;
            else if(v[mid]>=x)
                r=mid-1;
            else
                l=mid+1;
        }
        return -1;
        
    }
};