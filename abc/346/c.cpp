#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    vector<long long int> a(n);
    vector<long long int> flag(k + 1);
    long long ans = 0;
    for (auto &ai : a)
    {
        cin >> ai;
    }

    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= k; i++)
        {
            if (a[j] == i)
            {
                flag[i] = 1;
            }
        }
    }

    for (int i = 1; i <= k; i++)
    {
        if (flag[i] == 0)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}