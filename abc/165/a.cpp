// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    int i;
    for (i = 1; i <= b; i++)
    {
        if (a <= i * k && i * k <= b)
        {
            cout << "OK" << endl;
            return 0;
        }
    }
    cout << "NG" << endl;
}