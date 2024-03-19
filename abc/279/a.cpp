// 2024/03/19
// 自力AC

#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0, num = 0;
    for (auto ai : s)
    {
        if (s[i] == 'v')
        {
            num++;
        }
        else
        {
            num += 2;
        }
        i++;
    }
    cout << num << endl;
}