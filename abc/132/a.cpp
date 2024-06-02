// 2024/0602
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    if (s[0] == s[1] and s[1] != s[2] and s[2] == s[3])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}