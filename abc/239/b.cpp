// 2024/03/17
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x;
    cin >> x;
    if (0 <= x || x % 10 == 0)
    {
        cout << x / 10 << endl;
    }
    else
    {
        cout << x / 10 - 1 << endl;
    }
}