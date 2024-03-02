// 2024/03/02
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    vector<int> mx(26, 0); // 0で初期化
    int l = 0;
    while (l < n)
    {
        int r = l + 1;
        while (r < n and s.at(l) == s.at(r)) // 自分とその次で比べる
        {
            r++;
        }
        int c = s.at(l) - 'a';
        mx.at(c) = max(mx.at(c), r - l);
        l = r;
    }

    int ans = 0;
    for (int i = 0; i < 26; i++)
    {
        ans += mx.at(i);
    }
    cout << ans << endl;

    return 0;
}
