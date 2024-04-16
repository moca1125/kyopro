// 2024/04/15
//RE
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> c(n);
    vector<int> ans(n, 1000000001);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> c[i];
    }
    for (int i = 0; i < n; i++)
    {

        if (ans[c[i]] > a[i])
        {
            ans[c[i]] = a[i];
        }
    }

    auto newEnd = remove(ans.begin(), ans.end(), 1000000001);
    ans.erase(newEnd, ans.end());

    int Max = *max_element(ans.begin(), ans.end());
    cout << Max << endl;
}