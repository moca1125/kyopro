// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool one = false;
    bool two = true;
    if (s.at(0) == '<' && s.at(s.size() - 1) == '>')
    {
        one = true;
    }
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s.at(i) != '=')
        {
            two = false;
        }
    }
    if (one == true && two == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}