// 2024/03/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    int dan = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> d.at(i);
    }

    sort(d.begin(), d.end());
    reverse(d.begin(), d.end());

    for (int i = 1; i < n; i++)
    {
        if (d.at(i - 1) >= d.at(i))
        {
            if (d.at(i - 1) != d.at(i))
            {
                dan++;
            }
        }
    }
    cout << dan << endl;
}