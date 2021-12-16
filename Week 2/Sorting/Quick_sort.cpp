class Solution
{   
    public:
    void swap(int arr[],int i, int j)
    {
        int temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
    int partition (int arr[], int low, int high)
    {
       int j=low-1;
       for(int i=low;i<=high;i++)
       {
           if(arr[i]<arr[high])
           {
               j++;
               swap(arr,i,j);
           }
       }
       swap(arr,j+1,high);
       return j+1;
    }
    public:
    void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
        }
    }
};
