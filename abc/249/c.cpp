// 2024/03/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool big = false;
    bool small = false;
    bool jouken = true;
    int i, j;
    for (i = 0; i < s.size(); i++)
    {
        if ('A' <= s.at(i) && s.at(i) <= 'Z')
        {
            big = true;
        }
        if ('a' <= s.at(i) && s.at(i) <= 'z')
        {
            small = true;
        }
    }
    for (i = 0; i < s.size(); i++)
    {
        for (j = i + 1; j < s.size(); j++)
        {
            if (s.at(i) == s.at(j))
            {
                jouken = false;
            }
        }
    }

    if (big == true && small == true && jouken == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}