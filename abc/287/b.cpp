// 2024/04/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<char>> s(n, vector<char>(6));
    vector<string> t(m);
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < 6; i++)
        {
            cin >> s[j][i];
        }
    }
    for (int j = 0; j < m; j++)
    {
        cin >> t[j];
    }
    vector<string> S(n);
    for (int j = 0; j < n; j++)
    {
        for (int i = 3; i <= 5; i++)
        {
            S[j].push_back(s[j][i]);
        }
    }

    vector<int> count(n);
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (S[i] == t[j])
            {
                count[i] = 1;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (count[i] == 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}