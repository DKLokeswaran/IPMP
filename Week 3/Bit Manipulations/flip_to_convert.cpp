class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int N=a^b;
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

