// 2024/02/29
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int i, ans = 0;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    for (i = 0; i < m; i++)
    {
        cin >> b.at(i);
        ans += a.at(b.at(i) - 1);
    }
    cout << ans << endl;
    return 0;
}