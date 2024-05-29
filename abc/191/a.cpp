// 2024/05/29
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (v * (s - t) + v * t < d)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}