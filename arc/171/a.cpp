#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int i, check1, check2, check3, area;
    vector<int> n(t);
    vector<int> a(t);
    vector<int> b(t);

    for (i = 0; i < t; i++)
    {
        cin >> n.at(i);
        cin >> a.at(i);
        cin >> b.at(i);
    }

    for (i = 0; i < t; i++)
    {
        if ((a.at(i) + b.at(i)) <= n.at(i) && ((n.at(i) - 1) <= a.at(i) * b.at(i)))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}