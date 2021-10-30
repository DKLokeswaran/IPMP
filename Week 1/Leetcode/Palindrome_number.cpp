#include<string.h>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        string num=to_string(x);
        string rev=num;
        for(int i=0;i<num.length();i++)
        {
            rev[i]=num[num.length()-1-i];
        }
        for(int i=0;i<num.length();i++)
        {
            if(rev[i]!=num[i])
                return false;
        }
        return true;
    }
};