// 2024/06/15
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    cout << t[0] + a << endl;
    int check = t[0] + a;
    for (int i = 1; i < n; i++)
    {
        if ((check) >= t[i])
        {
            check += a;
        }
        else
        {
            check = t[i] + a;
        }
        cout << check << endl;
    }
}