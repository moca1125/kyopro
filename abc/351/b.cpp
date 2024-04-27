// 2024/04/27
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<char>> a(n, vector<char>(n));
    vector<vector<char>> b(n, vector<char>(n));
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> a[j][i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> b[j][i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a[j][i] != b[j][i])
            {
                cout << j + 1 << " " << i + 1 << endl;
            }
        }
    }
}