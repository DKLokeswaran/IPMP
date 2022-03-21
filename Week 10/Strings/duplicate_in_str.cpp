void find_duplicates(string s)
{
    unordered_set<char> t1,t2;
    unordered_multiset<char> t3;
    for(int i=0;i<s.length();i++)
    {
        if(t1.find(s[i])==t1.end())
            t1.insert(s[i]);
        else if(t2.find(s[i])==t2.end())
            t2.insert(s[i]);
        else
            t3.insert(s[i]);
    }
    for(auto it=t2.begin();it!=t2.end();it++)
        cout<<*it<<"\t"<<t1.count(*it)+t2.count(*it)+t3.count(*it)<<endl;
}