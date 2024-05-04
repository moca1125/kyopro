// 2024/05/04
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    if (x % 100 == 0 && 100 <= x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}