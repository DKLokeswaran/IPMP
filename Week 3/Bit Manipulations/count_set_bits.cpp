class Solution {
  public:
    int setBits(int N) {
        int ans;
        while(N!=0)
        {
            if(N%2!=0)
                ans++;
            N/=2;
        }
        return ans;
    }
};
