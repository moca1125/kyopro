// 2024/03/02
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    int i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            cin >> a.at(j).at(i);
        }
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (a.at(j).at(i) == 1)
            {
                cout << i + 1;
                if (i != n - 1)
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}