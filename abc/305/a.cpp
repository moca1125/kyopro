#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int num, i, comp, ans;
    cin >> n;
    num = 100;
    for (i = 0; i <= 100; i += 5)
    {
        comp = abs(i - n);
        if (num > comp)
        {
            num = comp;
            ans = i;
        }
    }
    cout << ans << endl;
}