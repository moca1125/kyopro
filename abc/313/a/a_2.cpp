// 2024/04/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> tmp(p);
    int ans;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
        tmp[i] = p[i];
    }
    sort(tmp.rbegin(), tmp.rend());
    int max = tmp[0];
    ans = max + 1 - p[0];

    if (max == p[0] && max != tmp[1])
    {
        cout << "0" << endl;
    }
    else
    {
        cout << ans << endl;
    }
}