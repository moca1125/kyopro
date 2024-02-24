// 2024/02/24
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);
    int i, j;
    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }
    int q;
    cin >> q;
    vector<char> c(q), d(q);
    for (i = 0; i < q; i++)
    {
        cin >> c.at(i) >> d.at(i);
    }
    vector<char> tmp(1);
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < q; i++)
        {
            if (s.at(j) == c.at(i))
            {
                tmp.at(0) = d.at(i);
                swap(s.at(j), tmp.at(0));
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}