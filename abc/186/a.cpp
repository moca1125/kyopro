// 2024/04/08
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
    {
        if (n >= i * w)
        {
            ans = i;
        }
        else
        {
            break;
        }
    }
    cout << ans << endl;
}