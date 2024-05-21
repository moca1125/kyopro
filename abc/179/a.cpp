// 2024/05/22
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    char m = s[s.size() - 1];
    if (m != 's')
    {
        cout << s << "s" << endl;
    }
    else
    {
        cout << s << "es" << endl;
    }
}