// 2024/06/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool ans = false;
    for (int i = 1; i <= 3; i++)
    {
        if (n % 10 == 7)
        {
            ans = true;
        }

        n /= 10;
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