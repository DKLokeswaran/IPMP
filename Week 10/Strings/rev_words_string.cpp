class Solution {
public:
    string reverseWords(string s) {
        string res="";
        string temp=res;
        bool is_first=true;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' '&&temp!="")
            {
                res=' '+temp+res;
                temp="";
            }
            else if(s[i]!=' ')
                temp+=s[i];
        }
        if(temp=="")
        {
            for(int i=0;i<res.length();i++)
            {
                if(res[i]==' '&&is_first)
                    continue;
                else
                {
                    is_first=false;
                    temp+=res[i];
                }
            }
            return temp;
        }
        return temp+res;
    }
};