// 2024/02/26
// A07
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d, n;
    cin >> d >> n;
    vector<int> l(n + 1), r(n + 1), ans(d + 1);
    int i, j;
    for (i = 1; i <= n; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }
    // 0で初期化
    for (i = 1; i <= d; i++)
    {
        ans.at(i) = 0;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = l.at(i); j <= r.at(i); j++)
        {
            ans.at(j)++;
        }
    }

    for (i = 1; i <= d; i++)
    {
        cout << ans.at(i) << endl;
    }
    return 0;
}