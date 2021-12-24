class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            vector <int> ans;
            int ans1=0,ans2=0;
            d%=16;
            for(int i=0;i<16;i++)
            {
                if(n==0)
                    break;
                if(n%2!=0)
                {
                    ans1+=pow(2,(i+d)%16);
                    ans2+=pow(2,(i-d)>=0?(i-d):16+i-d);
                }
                n/=2;
            }
            ans.push_back(ans1);
            ans.push_back(ans2);
            return ans;
        }
};

