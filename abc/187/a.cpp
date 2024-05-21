// 2024/05/21
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int ans1 = (a[0] - '0') + (a[1] - '0') + (a[2] - '0');
    int ans2 = (b[0] - '0') + (b[1] - '0') + (b[2] - '0');
    if (ans1 < ans2)
    {
        cout << ans2 << endl;
    }
    else
    {
        cout << ans1 << endl;
    }
}