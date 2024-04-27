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
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        ans.push_back(pow(2, a[i - 1]));
        while (1)
        {
            if (ans.size() == 1)
            {
                cout << i << "a" << ans[ans.size() - 1] << endl;
                break;
            }
            else if (ans[ans.size() - 2] == ans[ans.size() - 1])
            {
                ans.pop_back();
                ans.pop_back();
                ans.push_back(ans[ans.size() - 1] * 2);
                cout << i << "b" << ans[ans.size() - 1] << endl;
            }
            else
            {
                cout << i << "c" << ans[ans.size() - 1] << endl;
                break;
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
    cout << ans.size() << endl;
}