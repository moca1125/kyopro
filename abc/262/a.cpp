// 2024/04/07
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y % 4 == 2)
    {
        cout << y << endl;
    }
    else
    {
        if (y % 4 == 0)
        {
            cout << y + 2 << endl;
        }
        else if (y % 4 == 1)
        {
            cout << y + 1 << endl;
        }
        else if (y % 4 == 3)
        {
            cout << y + 3 << endl;
        }
    }
}