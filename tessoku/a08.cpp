// 2024/02/26
// A08
// TLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, q;
    int i, j;
    cin >> h >> w;
    vector<vector<int>> x(h, vector<int>(w));
    for (j = 0; j < h; j++)
    {
        for (i = 0; i < w; i++)
        {
            cin >> x.at(j).at(i);
        }
    }
    cin >> q;
    vector<int> a(q), b(q), c(q), d(q);
    for (i = 0; i < q; i++)
    {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }

    int x_begin, y_begin, x_end, y_end;
    int k, ans = 0;
    for (k = 0; k < q; k++)
    {
        x_begin = b.at(k) - 1;
        y_begin = a.at(k) - 1;
        x_end = d.at(k) - 1;
        y_end = c.at(k) - 1;
        for (j = y_begin; j <= y_end; j++)
        {
            for (i = x_begin; i <= x_end; i++)
            {
                ans += x.at(j).at(i);
            }
        }
        cout << ans << endl;
        ans = 0;
    }
}