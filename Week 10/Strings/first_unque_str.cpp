class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
        unordered_multiset<char> temp,temp1;
        for(int i=0;i<S.length();i++)
            if(temp.find(S[i])==temp.end())
                temp.insert(S[i]);
            else
                temp1.insert(S[i]);
        unordered_multiset<char>:: iterator it;
        for(int i=0;i<S.length();i++)
            if(temp1.find(S[i])==temp1.end())
                return S[i];
        return '$';
    }

};