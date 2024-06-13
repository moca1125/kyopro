// 2024/06/14
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 1000 == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << 1000 - x % 1000 << endl;
    }
}