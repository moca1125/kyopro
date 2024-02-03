#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i, n;

    n = 0;
    for (i = s.size() - 1; 0 <= i; i--)
    {
        n++;
        if (s.at(i) == '.')
        {
            break;
        }
    }
    for (i = s.size() - n + 1; i < s.size(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}