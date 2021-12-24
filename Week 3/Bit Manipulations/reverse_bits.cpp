class Solution {
  public:
    long long reversedBits(long long X) {
        long long ans=0;
        for(int i=0;i<32;i++)
        {
            if(X==0)
                break;
            if(X%2!=0)
                ans+=pow(2,31-i);
            X/=2;
        }
        return ans;
    }
};
