#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

//Only function part is coded by me
//Rest were already in the question ide
vector<int> parseInts(string str) {
	vector<int> res;
    stringstream ss(str);
    char ch;
    int n;
    while(!ss.eof())
    {
        ss>>n;
        res.push_back(n);
        ss>>ch;
    }
    return res;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
