// 2024/06/20
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(2);
    cin >> a[0] >> a[1];
    int ans;

    for (int i = 1; i <= 3; i++)
    {
        if (a[0] == i || a[1] == i)
        {
        }
        else
        {
            ans = i;
        }
    }
    cout << ans << endl;
}