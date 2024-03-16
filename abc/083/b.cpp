// 2024/03/16
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int i, num;
    int ans = 0;
    for (i = 1; i <= n; i++)
    {
        int comp = i;
        num = 0;
        while (comp > 0)
        {
            num += comp % 10; // 1の位が分かる
            comp /= 10;       // 見る位を変える
        }
        if (a <= num && num <= b)
        {
            ans += i;
        }
    }
    cout << ans << endl;
}