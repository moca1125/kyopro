// 2024/03/31
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, r, c;
    cin >> h >> w >> r >> c;
    int ans = 0;
    if (1 <= r - 1)
    {
        ans++;
    }
    if (r + 1 <= h)
    {
        ans++;
    }
    if (c + 1 <= w)
    {
        ans++;
    }
    if (1 <= c - 1)
    {
        ans++;
    }
    cout << ans << endl;
}