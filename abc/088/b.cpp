// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int alice = 0, bob = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            alice += a.at(n - i - 1);
        }
        else
        {
            bob += a.at(n - i - 1);
        }
    }

    cout << alice - bob << endl;
}