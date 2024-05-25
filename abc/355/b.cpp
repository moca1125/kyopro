// 2024/05/25
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a;
    vector<int> b(m);
    vector<int> ans(201, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        ans[a] = 1;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int nu = 0;
    for (int i = 0; i < 201; i++)
    {

        if (ans[i] == 1)
        {
            nu++;
            if (nu == 2)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
        else
        {
            nu = 0;
        }
    }
    cout << "No" << endl;
}