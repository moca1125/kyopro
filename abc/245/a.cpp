// 2024/04/04
// 　自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    bool Takahashi = false;
    cin >> a >> b >> c >> d;
    if (a < c)
    {
        Takahashi = true;
    }
    else if (a == c)
    {
        if (b <= d)
        {
            Takahashi = true;
        }
    }
    if (Takahashi)
    {
        cout << "Takahashi" << endl;
    }
    else
    {
        cout << "Aoki" << endl;
    }
}