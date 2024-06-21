// 2024/06/21
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a <= 5)
    {
        cout << "0" << endl;
    }
    else if (13 <= a)
    {
        cout << b << endl;
    }
    else
    {
        cout << b / 2 << endl;
    }
}