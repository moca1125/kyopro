// 2024/06/17
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool ans1 = false;
    bool ans2 = false;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            ans1 = true;
        }
        else
        {
            ans2 = true;
        }
    }

    if (ans1 == true && ans2 == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}