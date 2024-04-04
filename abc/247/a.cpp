// 2024/04/04
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> s(4);
    vector<char> ans(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> s[i];
    }

    ans[0] = '0';
    ans[1] = s[0];
    ans[2] = s[1];
    ans[3] = s[2];

    for (auto ai : ans)
    {
        cout << ai;
    }
    cout << endl;
}