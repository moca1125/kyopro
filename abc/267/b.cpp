// 2024/03/14
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool split_1 = false;
    bool split_2 = false;
    bool a = false;
    bool b = false;
    vector<int> zero(7, 0);
    if (s.at(0) == '0')
    {
        split_1 = true;
    }
    if (s.at(0) == '0' && s.at(4) == '0')
    {
        zero.at(3) = 1;
    }
    if (s.at(1) == '0' && s.at(7) == '0')
    {
        zero.at(2) = 1;
    }
    if (s.at(2) == '0' && s.at(8) == '0')
    {
        zero.at(4) = 1;
    }
    if (s.at(3) == '0')
    {
        zero.at(1) = 1;
    }
    if (s.at(5) == '0')
    {
        zero.at(5) = 1;
    }
    if (s.at(6) == '0')
    {
        zero.at(0) = 1;
    }
    if (s.at(9) == '0')
    {
        zero.at(6) = 1;
    }

    for (int i = 1; i < 6; i++)
    {
        if (zero.at(i) == 1)
        {
            for (int j = 0; j < i; j++)
            {
                if (zero.at(j) == 0)
                {
                    a = true;
                }
            }
            for (int j = i + 1; j < 7; j++)
            {
                if (zero.at(j) == 0)
                {
                    b = true;
                }
            }
            if (a == true && b == true)
            {
                split_2 = true;
                break;
            }
            a = false;
            b = false;
        }
    }

    if (split_1 == true && split_2 == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}