// 2024/04/13
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    cin >> S;
    sort(S.begin(), S.end());
    vector<int> ans(101);
    int count = 1;
    bool kotae = true;

    for (int i = 1; i <= S.size(); i++)
    {
        if (S[i] == S[i - 1])
        {
            count++;
        }
        else
        {
            ans[count]++;
            count = 1;
        }
    }
    for (int i = 1; i < 101; i++)
    {

        if (ans[i] != 2 && ans[i] != 0)
        {
            kotae = false;
        }
    }

    if (kotae == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}