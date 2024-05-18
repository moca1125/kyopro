// 2024/05/18
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> c(n);
    vector<int> ans(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
    }

    int num = 0;
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = j + 1; i < n; i++)
        {
            if (a[j] < a[i] && c[j] > c[i])
            {
                ans[num] = j + 1;
                num++;
            }
        }
    }

    auto Ans = remove(ans.begin(), ans.end(), 0);
    ans.erase(Ans, ans.end());
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        if (Ans[i] - 1 != i)
        {
            A[i] = i;
            cout << i << endl;
        }
    }
    for (int i = 0; i < n; i++)
    {

        cout << A[i] + 1 << " ";
    }

    cout << endl;
}