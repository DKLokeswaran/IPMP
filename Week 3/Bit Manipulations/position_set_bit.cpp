class Solution {
  public:
    int findPosition(int N) {
        int count=0;
        if(!N)
            return -1;
        while(N)
        {
            count++;
            if(N%2!=0&&N!=1)
                return -1;
            N/=2;
        }
        return count;
    }
};

