class Solution {
public:
    int rec(vector<int>& nums,int l,int r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]>nums[mid+1])
            return nums[mid+1];
        if(nums[mid]<nums[mid-1])
            return nums[mid];
        if(nums[mid]>nums[l])
            return rec(nums,mid+1,r);
        return rec(nums,l,mid-1);
    }
    int findMin(vector<int>& nums) {
        if(nums[0]<nums[nums.size()-1]||nums.size()==1)
            return nums[0];
        return rec(nums,0,nums.size()-1);
    }
};