// 2024/04/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> ans(n);
    int num, x;
    for (int i = 0; i < q; i++)
    {
        cin >> num >> x;
        if (num == 3)
        {
            if (ans[x - 1] >= 2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            ans[x - 1] += num;
        }
    }
}