// 2024/04/01
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(10);
    int ans;
    for (auto &ai : a)
    {
        cin >> ai;
    }
    ans = a[0];
    ans = a[ans];
    ans = a[ans];
    cout << ans << endl;
}