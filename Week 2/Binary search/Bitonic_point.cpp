class Solution{
public:
    int rec(int arr[],int l,int r)
    {
        if(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arr[mid]>arr[mid+1]&&arr[mid]>arr[mid-1])
                return arr[mid];
            if(arr[mid]>arr[mid+1]&&arr[mid]<arr[mid-1])
                return rec(arr,l,mid-1);
            return rec(arr,mid+1,r);
        }
    }
	
	int findMaximum(int arr[], int n) {
	    return rec(arr,0,n-1);
	}
};