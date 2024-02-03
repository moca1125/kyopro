#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    long long int ans;
    cin >> n;
    vector<long long int> a(n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    ans = 0;

    for (i = 0; i < n; i++)
    {
        ans += a.at(i);
        if (ans < 0)
        {
            ans = 0;
        }
    }
    cout << ans << endl;
}