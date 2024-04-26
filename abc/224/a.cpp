// 2024/04/26
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s[s.size() - 2] == 'e' && s[s.size() - 1] == 'r')
    {
        cout << "er" << endl;
    }
    else
    {
        cout << "ist" << endl;
    }
}