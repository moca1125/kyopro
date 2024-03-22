// 2024/03/22
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    vector<vector<int>> a(2, vector<int>(2));
    for (int j = 0; j < 2; j++)
    {
        for (int i = 0; i < 2; i++)
        {
            cin >> a[j][i];
        }
    }
    cout << a[r - 1][c - 1] << endl;
}