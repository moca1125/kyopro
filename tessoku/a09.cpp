// 2024/02/28
// A09
// WA TLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> a(n), b(n), c(n), d(n);
    vector<vector<int>> square(h, vector<int>(w, 0));
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }
    int x_begin, y_begin, x_end, y_end;
    int k;
    for (k = 0; k < n; k++)
    {
        x_begin = a.at(k) - 1;
        y_begin = b.at(k) - 1;
        x_end = c.at(k) - 1;
        y_end = d.at(k) - 1;
        for (j = y_begin; j <= y_end; j++)
        {
            for (i = x_begin; i <= x_end; i++)
            {
                square.at(j).at(i)++;
            }
        }
    }

    for (j = 0; j < h; j++)
    {
        for (i = 0; i < w; i++)
        {
            cout << square.at(j).at(i);
            if (i != w - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}