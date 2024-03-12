// 2024/03/12
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    for (i = 1; i < 10001; i++)
    {
        int ans1 = i * 8 / 100; // 小数を介するのは誤差がありそうで怖いから，8倍して100で割って切り捨て
        int ans2 = i * 10 / 100;
        if (ans1 == a && ans2 == b)
        {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}