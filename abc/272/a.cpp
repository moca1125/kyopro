// 2024/03/25
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (auto &ai : a)
    {
        cin >> ai;
        ans += ai;
    }
    cout << ans << endl;
}