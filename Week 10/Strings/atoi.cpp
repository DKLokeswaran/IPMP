class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int i=0,res=0;
        int n=str.length();
        bool flag=false;
        if (str[0]=='-')
        {
            i=1;
            flag=true;
        }
        for(i;i<n;i++)
            if(str[i]>47&&str[i]<58)
                res+=(int)(str[i]-48)*pow(10,n-i-1);
            else
                return -1;
        return flag?-res:res;
    }
};