// 2024/06/21
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, q, r;
    cin >> p >> q >> r;
    int ans1 = p + q;
    int ans2 = p + r;
    int ans3 = q + r;
    int ans = min({ans1, ans2, ans3});
    cout << ans << endl;
}