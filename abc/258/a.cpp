// 2024/03/07
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int n;
    cin >> k;

    if (60 <= k)
    {
        n = k - 60;
        cout << "22:";
        if (n < 10)
        {
            cout << "0" << n << endl;
        }
        else
        {
            cout << n << endl;
        }
    }
    else
    {
        cout << "21:";
        if (k < 10)
        {
            cout << "0" << k << endl;
        }
        else
        {
            cout << k << endl;
        }
    }
}