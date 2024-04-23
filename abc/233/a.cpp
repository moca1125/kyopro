// 2024/04/23
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    for (int i = 0; i <= 1000; i++)
    {
        if (i * 10 + x >= y)
        {
            cout << i << endl;
            break;
        }
    }
}