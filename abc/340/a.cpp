#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, d;
    cin >> a >> b >> d;
    int i, ans;
    ans = 0;
    for (i = 1; ans < b; i++)
    {
        ans = a + (i - 1) * d;
        cout << ans << " ";
    }
}