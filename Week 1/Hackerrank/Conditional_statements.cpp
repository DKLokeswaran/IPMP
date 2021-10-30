#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);


//Only int main part is coded by me
//Rest were already in the question ide
int main()
{
    char arr[][9]={"one","two","three","four","five","six","seven","eight","nine"};
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    if(n<10)
        cout<<arr[n-1];
    else
        cout<<"Greater than 9";

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
