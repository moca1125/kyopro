// 2024/02/24
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    vector<int> p(n);
    for (i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }
    int q;
    cin >> q;
    vector<int> a(q), b(q);
    for (i = 0; i < q; i++)
    {
        cin >> a.at(i) >> b.at(i);
    }

    for (j = 0; j < q; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (a.at(j) == p.at(i) || b.at(j) == p.at(i))
            {
                cout << p.at(i) << endl;
                break;
            }
        }
    }
}