// 2024/06/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int check = 0;
    if (s[0] == s[1] && s[1] == s[2] && s[0] == 'R')
    {
        check += 3;
    }
    else if (s[0] == s[1] && s[0] == 'R')
    {
        check += 2;
    }
    else if (s[1] == s[2] && s[1] == 'R')
    {
        check += 2;
    }
    else if (s[0] == 'R' || s[1] == 'R' || s[2] == 'R')
    {
        check++;
    }
    cout << check << endl;
}