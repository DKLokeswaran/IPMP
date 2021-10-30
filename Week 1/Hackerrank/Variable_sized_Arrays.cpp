#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q,k,te,i,j;
    cin>>n>>q;
    vector<vector<int>> vect;
    for(int i=0;i<n;i++)
    {
        cin>>k;
        vector<int> temp;
        for(int j=0;j<k;j++)
        {
            cin>>te;
            temp.push_back(te);
        }
        vect.push_back(temp);
    }
    while(q--)
    {
        cin>>i>>j;
        cout<<vect[i][j]<<"\n";
    }   
    return 0;
}
