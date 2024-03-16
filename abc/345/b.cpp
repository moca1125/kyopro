// 2024/03/17
// 自力AC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    long long int ans;
    cin >> x;

    if (x % 10 != 0 && 0 < x)
    {

        ans = (x / 10) + 1;
    }
    else
    {
        ans = x / 10;
    }

    cout << ans << endl;
}