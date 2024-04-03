// 2024/04/03
//  自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<string> ans = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    cin >> s;
    for (int i = 0; i < 5; i++)
    {
        if (s == ans[i])
        {
            cout << 5 - i << endl;
        }
    }
}