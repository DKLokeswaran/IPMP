class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int n1=m-l+1;
        int n2=r-m;
        int arr1[n1],arr2[n2];
        int i,j=0,k=0;
        for(i=0;i<n1;i++)
            arr1[i]=arr[l+i];
        for(j=0;j<n2;j++)
            arr2[j]=arr[m+1+j];
        i=l;
        j=0;
        k=0;
        while((j<n1&&k<n2)&&(i<=r))
        {
           if(arr1[j]<=arr2[k])
           {
               arr[i]=arr1[j];
               j++;
           }
           else
           {
               arr[i]=arr2[k];
               k++;
           }
           i++;
        }
        while((j<n1)&&(i<=r))
        {
            arr[i]=arr1[j];
            j++;
            i++;
        }
        while((k<n2)&&(i<=r))
        {
            arr[i]=arr2[k];
            k++;
            i++;
        }
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int m= l+(r-l)/2;
            mergeSort(arr,l,m);
            mergeSort(arr,m+1,r);
            merge(arr,l,m,r);
        }
    }
};