class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,min=nums[0];
        for(int i=0;i<nums.size();i++)
            if(nums[i]<min)
                min=nums[i];
        int max=min;
        cout<<max;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            if(sum>max)
                max=sum;
            if(sum<0)
                sum=0;
            
        }
        return max;
    }
};