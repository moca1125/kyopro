// 2024/02/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, num = 0;
    cin >> n;
    string s;

    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "and" || s == "not" || s == "that" || s == "the" || s == "you")
        {
            num++;
            break;
        }
    }

    if (num) // num==1
    {
        cout << "Yes" << endl;
    }
    else // num=0
    {
        cout << "No" << endl;
    }
}