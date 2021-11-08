class solution
{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searched
    int searchInSorted(int arr[], int N, int K) 
    { 
    
        int l=0;
        int r=N-1;
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]==K)
                return 1;
            else if(arr[m]>K)
                r=m-1;
            else
                l=m+1;
        }
        return -1;  
    }
};