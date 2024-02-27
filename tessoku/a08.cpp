// 2024/02/26
// A08
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, q;
    int i, j
    ;
    cin >> h << w;
    vector<vector<int>> x(h+1, vector<int>(w+1));
    for (j = 1; j <= h; j++)
    {
        for (i = 1; i <= w; i++)
        {
            cin >> x.at(j).at(i);
        }
    }
    cin >> q;
    vector<int> a(q), b(q), c(q), d(q);
    for (i = 1; i <= q; i++)
    {
        cin >> a.at(i) >> b.at(i) >> c.at(i) >> d.at(i);
    }
}