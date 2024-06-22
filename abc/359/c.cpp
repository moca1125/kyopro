#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sx, sy, tx, ty;
    long long ans;
    cin >> sx >> sy >> tx >> ty;
    long long dxx = abs(tx - sx);
    long long ans1 = abs(ty - sy);
    long long dx;

    if (sy % 2 == 1)
    {
        if (ans1 % 2 == 1)
        {
            dxx = ans1 / 2 + 1;
        }
        else
        {
            dxx = ans1 / 2;
        }
    }
    else
    {
        dxx = ans1 / 2;
    }

    if (dxx % 2 == 1)
    {
        dx = dxx / 2 + 2;
    }
    else
    {
        dx = dxx / 2 + 1;
    }

    if (dxx > dx)
    {
        ans = dxx - dx;
    }
    else
    {
        ans = ans1;
    }
    cout << ans << endl;

    return 0;
}
