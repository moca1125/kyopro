// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool one = false;
    bool two = false;
    bool three = true;
    int num = 0;
    if (s.at(0) == 'A')
    {
        one = true;
    }
    for (int i = 2; i < s.size() - 1; i++)
    {
        if (s.at(i) == 'C')
        {
            num++;
        }
    }
    if (num == 1)
    {
        two = true;
    }
    for (int i = 1; i < s.size(); i++)
    {
        if (s.at(i) != 'C')
        {
            if (s.at(i) <= 'Z')
            {
                three = false;
            }
        }
    }
    if (one == true && two == true && three == true)
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }
}