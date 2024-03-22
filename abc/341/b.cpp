// 2024/03/21
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> s(n - 1);
    vector<int> t(n - 1);
    for (auto &ai : a)
    {
        cin >> ai;
    }
    for (int i = 0; i < n - 1; i++)
    {
        cin >> s[i];
        cin >> t[i];
    }
    int num = 0;
    int ans;
    while (1)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] >= s[i])
            {
                a[i] -= s[i];
                a[i + 1] += t[i];
                num++;
            }
        }
        if (num == 0)
        {
            ans = a[n - 1];
            break;
        }
        num = 0;
    }
    cout << ans << endl;
}