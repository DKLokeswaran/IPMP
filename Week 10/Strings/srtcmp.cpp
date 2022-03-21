int str_cmp(string s1,string s2)
{
    int i=0;
    while(i<s1.length()&&i<s2.length())
    {
        if(s1[i]>s2[i])
            return 1;
        else if(s1[i]<s2[i])
            return -1;
        i++;
    }
    if(s1.length()==s2.length())
        return 0;
    else if(i==s1.length())
        return -1;
    else if(i==s2.length())
        return 1;
}