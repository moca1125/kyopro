// 2024/04/04
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    int comp, ans = 1000000;
    for (int i = 0; i <= n; i++)
    {
        if ((n - i) % 3 == 0)
        {
            comp = x * i + y * ((n - i) / 3);
        }
        if (ans > comp)
        {
            ans = comp;
        }
    }
    cout << ans << endl;
}