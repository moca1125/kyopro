// 2024/04/28
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int dif = a - b;
    long long int ans = 1;

    for (int i = 0; i < dif; i++)
    {
        ans *= 32;
    }
    cout << ans << endl;
}