class solution
{
    int find_pivot(int A[],int l,int h)
    {
        if(l>h)
            return -1;
        if(l==h)
            return l;
        int mid=l+(h-l)/2;
        if((A[mid]>A[mid+1])&&(mid<h))
            return mid;
        else if((A[mid]<A[mid-1])&&(l<mid))
            return mid-1;
        else if(A[mid]>=A[h])
            return find_pivot(A,mid+1,h);
        return find_pivot(A,l,mid-1);
    }
    int searchInSorted(int arr[], int l,int r, int K) 
    { 
        while(l<=r)
        {
            int m=l+(r-l)/2;
            if(arr[m]==K)
                return m;
            else if(arr[m]>K)
                r=m-1;
            else
                l=m+1;
        }
        return -1;  
    }
    public:
    int search(int A[], int l, int h, int key){
    //complete the function here
        int pivot=find_pivot(A,l,h);
        if(pivot==-1)
            return searchInSorted(A,l,h,key);
        if(A[pivot]==key)
            return pivot;
        else if(A[l]<=key)
            return searchInSorted(A,l,pivot-1,key);
        return searchInSorted(A,pivot+1,h,key);
    }
};