string move_even(string s)
{
    string r1="";
    string r2="";
    for(int i=0;i<s.length();i++)
        if(i%2)
            r2+=s[i];
        else
            r1+=s[i];
    return r1+r2;
}