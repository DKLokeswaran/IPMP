class Solution{
public:
    int find_pivot(int arr[],int l,int r)
    {
        int mid=l+(r-l)/2;
        if((arr[mid]>arr[mid+1])&&(l<=r))
            return arr[mid+1];
        else if((l<=r)&&(arr[mid]<arr[mid-1]))
            return arr[mid];
        else if(arr[mid]>arr[r])
            return find_pivot(arr,mid+1,r);
        return find_pivot(arr,l,mid-1);
    }
    int findMin(int arr[], int n){
        if(arr[n-1]>arr[0])
            return arr[0];
        return find_pivot(arr,0,n-1);
            
    }
};