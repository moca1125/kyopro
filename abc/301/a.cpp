// 2024/02/02
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i, num1, num2, num3, num4, a, b;
    string s;
    cin >> n;
    cin >> s;

    num1 = 0, num2 = 0;
    for (i = 0; i < n; i++)
    {
        if (s.at(i) == 'T')
        {
            num1++;
        }
        else
        {
            num2++;
        }
    }
    num3 = 0, num4 = 0, a = 0, b = 0;
    if (num1 == num2)
    {
        for (i = 0; i < n; i++)
        {
            if (s.at(i) == 'T')
            {
                num3++;
                if (num3 == (n / 2))
                {
                    a++;
                    break;
                }
            }
            else
            {
                num4++;
                if (num4 == (n / 2))
                {
                    b++;
                    break;
                }
            }
        }

        if (a != 0)
        {
            cout << "T" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
    }
    else
    {
        if (num1 > num2)
        {
            cout << "T" << endl;
        }
        else if (num1 < num2)
        {
            cout << "A" << endl;
        }
    }
}