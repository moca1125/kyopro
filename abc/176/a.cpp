// 2024/06/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x >> t;
    int num = n / x;
    if (n % x == 0)
    {
        cout << num * t << endl;
    }
    else
    {
        cout << (num + 1) * t << endl;
    }
}