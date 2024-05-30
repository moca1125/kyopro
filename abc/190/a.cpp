// 2024/05//30
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int a2 = a;
    int b2 = b;
    if (c == 0)
    {
        for (int i = 0; a != 0 && b != 0; i++)
        {
            if (i % 2 == 0)
            {
                a--;
            }
            else
            {
                b--;
            }
        }
    }
    else
    {
        for (int i = 0; a != 0 && b != 0; i++)
        {
            if (i % 2 == 0)
            {
                b--;
            }
            else
            {
                a--;
            }
        }
    }

    if (a == 0 || (c == 1 && a2 == 0 && b2 == 0))
    {
        cout << "Aoki" << endl;
    }
    else
    {
        cout << "Takahashi" << endl;
    }
}
