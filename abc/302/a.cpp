// 2024/02/01
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    long long int n;
    n = a / b;
    if (a % b == 0)
    {
        cout << n << endl;
    }
    else
    {
        cout << n + 1 << endl;
    }
}