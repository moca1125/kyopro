// 2024/03/16
// WA
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    long long int x;
    long long int ans;
    cin >> x;
    if ((5 <= x % 10 && x % 10 <= 9) || (-9 <= x % 10 && x % 10 <= -5))
    {
        if (0 < x)
        {
            ans = x / 10 + 1;
        }
        else
        {
            ans = x / 10 - 1;
        }
    }
    else
    {

        ans = x / 10;
    }

    cout << ans << endl;
}