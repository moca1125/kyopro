// 2024/03/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, y;
    cin >> n >> y;
    int i, j, c, ans;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            c = n - i - j;
            ans = 10000 * i + 5000 * j + 1000 * c;

            if (ans == y && 0 <= c)
            {
                cout << i << " " << j << " " << n - i - j << endl;
                return 0;
            }
        }
    }

    cout << "-1 -1 -1" << endl;
}