// 2024/02/25
// A05
/* これだとTLE o(N^3) 270億通りになる可能範囲は10億通り
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, j, m;
    cin >> n >> k;
    int num = 0;
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            for (m = 1; m <= n; m++)
            {
                if (i + j + m == k)
                {
                    num++;
                }
            }
        }
    }

    cout << num << endl;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, m;
    int n, k;
    int num = 0;
    cin >> n >> k;
    for (j = 1; j <= n; j++)
    {
        for (i = 1; i <= n; i++)
        {
            m = k - i - j;
            if (1 <= m && m <= n)
            {
                num++;
            }
        }
    }
    cout << num << endl;
}
