// 2024/04/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<string> s(n);
    vector<string> joui(k);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < k; i++)
    {
        joui[i] = s[i];
    }
    sort(joui.begin(), joui.end());
    for (int i = 0; i < k; i++)
    {
        cout << joui[i] << endl;
    }
}