// 2024/06/03
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    if (c1 == c2 && c2 == c3 && c1 == c3)
    {
        cout << "Won" << endl;
    }
    else
    {
        cout << "Lost" << endl;
    }
}