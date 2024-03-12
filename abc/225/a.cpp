// 2024/03/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i, j;
    int num = 0;
    for (i = 0; i < 2; i++)
    {
        for (j = 1; j < 3; j++)
        {
            if (s.at(i) != s.at(j))
            {
                num++;
            }
        }
    }
    if (num == 2)
    {
        cout << "3" << endl;
    }
    else if (num == 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "6" << endl;
    }
}