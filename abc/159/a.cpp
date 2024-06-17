// 2024/06/17
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int ans = m * (m - 1) / 2 + n * (n - 1) / 2;
    cout << ans << endl;
}