class Solution{
    public:
    
    long long m=1000000007;
    long long power(int N,int R)
    {
        if(R==0)
            return 1;
        long long num=power(N,R/2);
        long long ans=(num*num)%m;
        if(R%2==0)
            return ans;
        return ((ans%m)*(N%m))%m;
    }

};


