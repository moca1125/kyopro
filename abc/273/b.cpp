// 2024/03/08
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x, k, n, comp, i;
    double num;
    cin >> x >> k;
    comp = x;
    n = x;
    for (i = 1; i <= k; i++)
    {

        num = pow(10, i);
        n = (long long int)((n / num) + 0.5);
        n = n * pow(10, i);
    }
    cout << n << endl;
}