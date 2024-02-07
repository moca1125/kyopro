// 2024/02/07
// 自力AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    int i;
    int dif, num = 0;
    for (i = 0; i < n; i++)
    {
        cin >> t.at(i);
    }

    for (i = 0; i < n - 1; i++)
    {
        dif = t.at(i + 1) - t.at(i);
        if (dif <= d)
        {
            cout << t.at(i + 1) << endl;
            num++;
            break;
        }
    }

    if (num == 0)
    {
        cout << "-1" << endl;
    }
}