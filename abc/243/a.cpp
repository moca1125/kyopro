// 2024/06/04
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    int ans = v;
    int num = 0;
    while (1)
    {
        if (num % 3 == 0)
        {
            ans -= a;
        }
        else if (num % 3 == 1)
        {
            ans -= b;
        }
        else
        {
            ans -= c;
        }

        if (ans < 0 && num % 3 == 0)
        {
            cout << "F" << endl;
            return 0;
        }
        else if (ans < 0 && num % 3 == 1)
        {
            cout << "M" << endl;
            return 0;
        }
        else if (ans < 0 && num % 3 == 2)
        {
            cout << "T" << endl;
            return 0;
        }
        num++;
    }
}