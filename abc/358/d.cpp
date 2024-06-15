// 2024/06/15
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int num = -1;
    int check = 0;
    int ans = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = num + 1; i < n; i++)
        {
            if (b[j] <= a[i])
            {
                ans += a[i];
                num = i;
                check++;
                break;
            }
        }
    }
    if (check == m)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}