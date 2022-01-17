class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int s=0,e=0;
        for(int i=1;i<nums.size();i++)
            if(nums[i]<nums[i-1])
            {
                s=i-1;
                break;
            }
        for(int i=nums.size()-1;i>0;i--)
            if(nums[i]<nums[i-1])
            {
                e=i;
                break;
            }
        int min=nums[s];
        int max=nums[s];
        for(int i=s;i<=e;i++)
            if(nums[i]<min)
                min=nums[i];
            else if(nums[i]>max)
                max=nums[i];
        for(int i=0;i<s;i++)
            if(nums[i]>min)
                s=i;
        for(int i=e;i<nums.size();i++)
            if(nums[i]<max)
                e=i;
        return e?(e-s+1):0;
    }
};