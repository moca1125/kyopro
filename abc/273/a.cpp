// 2024/03/21
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans;
    if (n == 0)
    {
        ans = 1;
    }
    else
    {
        ans = n;
        for (int i = n; 2 <= i; i--)
        {
            ans *= (i - 1);
        }
    }
    cout << ans << endl;
}