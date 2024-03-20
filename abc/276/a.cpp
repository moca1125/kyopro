// 2024/03/20
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int count = -1;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count = i + 1;
        }
    }
    cout << count << endl;
}