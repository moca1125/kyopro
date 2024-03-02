// 2024/03/02
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (a + b != i)
        {
            cout << i;
            break;
        }
    }

    return 0;
}