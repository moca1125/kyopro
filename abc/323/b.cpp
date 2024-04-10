// 2024/04/09
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> s(n, vector<char>(n));
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> s[j][i];
        }
    }
    vector<int> check(n);
    vector<int> check_2(n);
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (s[j][i] == 'o')
            {
                check[j] += 2;
            }
            else if (s[j][i] == '-')
            {
                check[j]++;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        check_2[j] = check[j];
    }
    sort(check.rbegin(), check.rend());
    vector<int> ans1;
    vector<int> ans2;
    int num = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (check[j] == check_2[i])
            {
                ans1.push_back(i + 1);
            }
        }
    }
    for (int j = 1; j < ans1.size(); j++)
    {
        for (int i = 0; i < ans2.size(); i++)
        {
            if (ans1[j] != ans2[i])
            {
                ans2.push_back(ans1[j]);
            }
        }
    }
    for (auto &ai : ans2)
    {
        cout << ai << " ";
    }
    cout << endl;
}