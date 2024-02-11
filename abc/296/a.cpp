// 2024/02/11
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, num, i;
    cin >> n;
    vector<char> s(n);
    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }
    num = 0;
    for (i = 1; i < n; i++)
    {
        if ((s.at(i - 1) == 'M' && s.at(i) == 'F') || (s.at(i - 1) == 'F' && s.at(i) == 'M'))
        {
        }
        else
        {
            num++;
            break;
        }
    }
    if (num == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}