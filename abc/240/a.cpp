// 2024/04/06
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    bool ans = false;
    if (a == 1 && b == 10)
    {
        ans = true;
    }
    else
    {
        if (b == a + 1)
        {
            ans = true;
        }
    }

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}