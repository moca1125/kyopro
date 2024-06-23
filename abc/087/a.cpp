// 2024/06/23
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, a, b;
    cin >> x >> a >> b;
    x -= a;
    while (0 <= x)
    {
        x -= b;
    }
    cout << x + b << endl;
}