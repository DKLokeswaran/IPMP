class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int count=0;
        while(n)
        {
            count++;
            if(n%2!=0)
                break;
            n/=2;
            
        }
        return count;
    }
};
