// 2024/06/10
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(5);
    bool ans = false;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (a[i] == 0)
        {
            cout << a[i + 1] - 1 << endl;
            ans = true;
        }
    }
    if (ans == false)
    {
        cout << a[3] + 1 << endl;
    }
}