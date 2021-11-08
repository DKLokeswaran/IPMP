class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size=digits.size();
        digits[size-1]++;
        while(digits[size-1]==10)
        {
            digits[size-1]-=10;
            size--;
            if(size==0)
            {
                digits.insert(digits.begin(),1);
                break;
            }
            else
                digits[size-1]+=1;
        }
        return digits;
    }
};