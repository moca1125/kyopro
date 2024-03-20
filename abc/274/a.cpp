// 2024/03/21
// 自力AC
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    double a, b;
    cin >> a >> b;
    double ans;
    if (b == 0)
    {
        cout << "0.000" << endl;
    }
    else
    {
        ans = b / a;
        printf("%.3lf\n", ans);
    }
}
