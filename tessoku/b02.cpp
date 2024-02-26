// 2024/02/25
// B02
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, i;
    bool ans = false;
    cin >> a >> b;
    for (i = a; i <= b; i++)
    {
        if (100 % i == 0)
        {
            ans = true;
        }
    }

    if (ans == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}