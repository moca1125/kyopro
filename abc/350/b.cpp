// 2024/04/20
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> t(q);
    vector<int> ans(n, 1);
    for (int i = 0; i < q; i++)
    {
        cin >> t[i];
    }
    for (int j = 0; j < q; j++)
    {

        if (ans[t[j] - 1] == 0)
        {
            ans[t[j] - 1] = 1;
        }
        else
        {
            ans[t[j] - 1] = 0;
        }
        }
    int check = 0;
    for (int i = 0; i < n; i++)
    {

        if (ans[i] == 1)
        {
            check++;
        }
    }
    cout << check << endl;
}