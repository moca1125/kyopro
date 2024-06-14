// 2024/06/14
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, t, s_;
    cin >> s >> t;
    bool check = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            check = false;
        }
    }
    if (check == true && t.size() == s.size() + 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}