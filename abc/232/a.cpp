// 2024/04/24
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string a, b;
    bool check = true;
    int m = 0;

    for (int i = 0; i < s.size(); i++)
    {

        if (s[i] == 'x')
        {
            check = false;
            m = i;
            break;
        }
        a.push_back((char)s[i]);
    }
    for (int i = m; i < s.size(); i++)
    {
        b.push_back((char)s[i]);
    }
    cout << (stoi)(a) * (stoi)(b) << endl;
}