// 2024/04/06
// 自力AC
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    double h;
    cin >> h;
    double ans = sqrt(h * (12800000 + h));
    printf("%.9lf\n", ans);
}