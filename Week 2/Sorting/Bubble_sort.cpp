class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        bool is_sorted=false;
        int te[n];
        for(int i=0;i<n;i++)
            te[i]=arr[i];
        while(!is_sorted)
        {
            is_sorted=true;
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(te[i]!=arr[i])
                    is_sorted=false;
                te[i]=arr[i];
            }
            
        }
    }
};
