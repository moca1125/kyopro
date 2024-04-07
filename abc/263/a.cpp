// 2024/04/07
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    bool ans_2 = false;
    bool ans_3 = false;
    vector<int> ans(14);
    ans[a]++;
    ans[b]++;
    ans[c]++;
    ans[d]++;
    ans[e]++;
    for (int i = 1; i <= 13; i++)
    {
        if (ans[i] == 2)
        {
            ans_2 = true;
        }
        else if (ans[i] == 3)
        {
            ans_3 = true;
        }
    }
    if (ans_2 == true && ans_3 == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}