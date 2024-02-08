// 2024/02/08
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    vector<string> c(n), d(m);
    vector<long long int> p(m + 1);
    int i, j, ans, num;
    for (i = 0; i < n; i++)
        cin >> c.at(i);
    for (i = 0; i < m; i++)
        cin >> d.at(i);
    for (i = 0; i < m + 1; i++)
        cin >> p.at(i);

    ans = 0;
    for (j = 0; j < n; j++)
    {
        num = 0;
        for (i = 0; i < m; i++)
        {
            if (c.at(j) == d.at(i))
            {
                ans += p.at(i + 1);
            }
            else
            {
                num++;
            }

            if (i == (m - 1) && num == m)
            {
                ans += p.at(0);
            }
        }
    }
    cout << ans << endl;
}