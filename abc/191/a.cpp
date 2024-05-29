// 2024/05/29
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int v, t, s, d;
    cin >> v >> t >> s >> d;
    if (d < v * t || v * (s - t) + v * t < d)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}