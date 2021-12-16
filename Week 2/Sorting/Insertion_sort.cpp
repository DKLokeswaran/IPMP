class Solution
{
public:
    void swap(int *a,int *b)
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    void insertionSort(int arr[], int n)
    {
        for(int i=0;i<n;i++)
            for(int j=i-1;j>=0;j--)
            {
                if(arr[j+1]<arr[j])
                    swap(&arr[j+1],&arr[j]);
            }
    }
};
