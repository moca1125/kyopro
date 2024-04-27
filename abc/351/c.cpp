// 2024/04/27
//
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<long long> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        ans.push_back(a[i - 1]);
        while (1)
        {
            if (ans.size() == 1)
            {

                break;
            }
            else if (ans[ans.size() - 2] == ans[ans.size() - 1])
            {
                int f = ans[ans.size() - 1];
                ans.pop_back();
                ans.pop_back();
                ans.push_back(f + 1);
            }
            else
            {

                break;
            }
        }
        if (i == n - 1)
        {
            ans.push_back(a[n - 1]);
            while (1)
            {
                if (ans.size() == 1)
                {
                    break;
                }
                else if (ans[ans.size() - 2] == ans[ans.size() - 1])
                {
                    int f = ans[ans.size() - 1];
                    ans.pop_back();
                    ans.pop_back();
                    ans.push_back(f * 2);
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << ans.size() << endl;
}