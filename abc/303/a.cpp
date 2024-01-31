// 2024/01/31
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    string s;
    string t;
    int num1, num2, num3;
    cin >> n;
    cin >> s >> t;
    num1 = 0, num2 = 0, num3 = 0;
    for (i = 0; i < n; i++)
    {
        if (s.at(i) == 'l' || s.at(i) == '1')
        {
            if (t.at(i) == 'l' || t.at(i) == '1')
            {
            }
            else
            {
                num1++;
                break;
            }
        }
        else if (s.at(i) == '0' || s.at(i) == 'o')
        {
            if (t.at(i) == '0' || t.at(i) == 'o')
            {
            }
            else
            {
                num2++;
                break;
            }
        }
        else if (s.at(i) == t.at(i))
        {
        }
        else
        {
            num3++;
            break;
        }
    }
    // cout << num1 << num2 << num3 << endl;
    if (num1 == 0 && num2 == 0 && num3 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}