// 2024/04/13
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string t, s;
    cin >> s;
    cin >> t;
    vector<int> ans1(3);
    vector<int> ans2(3);
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (char(tolower(t[j])) == s[i])
            {
                ans1[j] = 1;
            }
        }
    }
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (char(tolower(t[j])) == s[i])
            {
                ans2[j] = 1;
            }
        }
    }
    if (t[2] == 'X')
    {
        ans2[2] = 1;
    }
    bool kotae1 = true;
    bool kotae2 = true;
    for (int i = 0; i < 3; i++)
    {
        if (ans1[i] == 0)
        {
            kotae1 = false;
        }
        if (ans2[i] == 0)
        {
            kotae2 = false;
        }
    }
    if (kotae1 == true || kotae2 == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}