// 2024/05/22
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int ans = min(n * a, b);
    cout << ans << endl;
}