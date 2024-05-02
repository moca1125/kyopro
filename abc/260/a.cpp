// 2024/05/02
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> ans(26);
    for (int i = 0; i < s.size(); i++)
    {
        ans[(int)(s[i] - 'a')]++;
        // cout << (int)(s[i] - 'a' - 1) << endl;
    }
    // cout << (int)s[0] << endl;
    for (int i = 0; i < 26; i++)
    {
        if (ans[i] == 1)
        {
            char answer = (char)i + 'a';
            cout << answer << endl;
            // cout << ans[i] << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
}