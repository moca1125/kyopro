// 2026/02/25
// A06
// 未AC
/*これだとTLE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), l(q), r(q);
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }
    int ans = 0;
    for (i = 0; i < q; i++)
    {
        for (j = l.at(i) - 1; j <= r.at(i) - 1; j++)
        {
            ans += a.at(j);
        }
        cout << ans << endl;
        ans = 0;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> a(n), l(q), r(q);
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (i = 0; i < q; i++)
    {
        cin >> l.at(i) >> r.at(i);
    }

    // 累積和計算
    vector<int> s(n);
    s.at(0) = a.at(0);
    for (i = 1; i < n; i++)
    {
        s.at(i) = s.at(i - 1) + a.at(i);
    }

    cout << s.at(9) << endl;

    // 質問に答える
    for (j = 0; j < q; j++)
    {
        cout << s.at(r.at(j) - 1) - s.at(l.at(j) - 2) << endl;
    }
}