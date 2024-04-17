// 2024/04/17
//
#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;
    string s1;
    s1.push_back(s[1]);
    s1.push_back(s[2]);
    s1.push_back(s[0]);
    string s2;
    s2.push_back(s[2]);
    s2.push_back(s[0]);
    s2.push_back(s[1]);
    cout << stoi(s) + stoi(s1) + stoi(s2) << endl;
}