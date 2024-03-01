// 2024/03/01
// 自力AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, s, m, l;
    cin >> n >> s >> m >> l;
    int i, j, k;
    long long int ans = 100000000, comp;
    for (k = 0; k <= 100; k++)
    {
        for (j = 0; j <= 100; j++)
        {
            for (i = 0; i <= 100; i++)
            {
                comp = k * s + j * m + l * i;
                if (comp <= ans && n <= 6 * k + 8 * j + 12 * i)
                {
                    ans = comp;
                }
            }
        }
    }
    cout << ans << endl;

    return 0;
}