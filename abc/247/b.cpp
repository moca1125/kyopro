// 2024/02/28
// わからん
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n), t(n);
    int i, j;
    bool sei = true;
    bool mei = true;
    bool adana = true;
    for (i = 0; i < n; i++)
    {
        cin >> s.at(i) >> t.at(i);
    }
    for (j = 0; j < n - 1; j++)
    {
        for (i = j + 1; i < n; i++)
        {
            if (s.at(i) == s.at(j))
            {
                sei = false;
            }
            if (t.at(i) == t.at(j))
            {
                mei = false;
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (s.at(i) == t.at(j))
            {
                adana = false;
            }
        }
    }
    if (sei == true || mei == true || adana == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}