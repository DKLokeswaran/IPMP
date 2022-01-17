class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int n1=0;
        int n2=0;
        while(n1<m&&n2<n)
        {
            if(nums1[n1]>nums2[n2])
            {
                ans.push_back(nums2[n2]);
                n2++;
            }
            else
            {
                ans.push_back(nums1[n1]);
                n1++;
            }
        }
        while(n2<n)
        {
            ans.push_back(nums2[n2]);
            n2++;
        }
        while(n1<m)
        {
            ans.push_back(nums1[n1]);
            n1++;
        }
        nums1=ans;
    }
};