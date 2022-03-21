string encode(string src)
{
    int count=1;
    string res="";
    res+=src[0];
    for(int j=1;j<src.length();j++)
    {
        if(src[j]==res[res.length()-1])
            count++;
        else
        {
            res+=(char)(count+48);
            res+=src[j];
            count=1;
        }
    }
    return res+(char)(count+48);
}