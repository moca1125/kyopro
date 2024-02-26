// 2024/02/25
// A02
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i;
    cin >> n >> x;
    vector<int> a(n);
    bool ans = false;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    for (i = 0; i < n; i++)
    {
        if (a.at(i) == x)
        {
            ans = true;
        }
    }

    if (ans == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}