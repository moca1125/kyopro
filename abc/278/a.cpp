// 2024/03/19
// 自力AC
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (0 < k)
    {
        a.erase(a.begin());
        a.push_back(0);
        k--;
    }

    for (auto &ai : a)
    {
        cout << ai << " ";
    }
}