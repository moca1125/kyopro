// 2024/03/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }
    reverse(s.begin(), s.end());
    for (auto ans : s)
    {
        cout << ans << endl;
    }
}