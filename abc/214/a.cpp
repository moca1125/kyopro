// 2024/05/20
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (1 <= n && n <= 125)
    {
        cout << "4" << endl;
    }
    else if (126 <= n && n <= 211)
    {
        cout << "6" << endl;
    }
    else
    {
        cout << "8" << endl;
    }
}