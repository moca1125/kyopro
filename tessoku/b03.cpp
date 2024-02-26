// 2024/02/25
// B03
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    vector<int> a(n);
    bool ans = false;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    for (j = 0; j < n; j++)
    {
        for (i = j + 1; i < n; i++)
        {
            for (k = i + 1; k < n; k++)
            {
                if ((a.at(j) + a.at(i) + a.at(k)) == 1000)
                {
                    ans = true;
                }
            }
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
    return 0;
}