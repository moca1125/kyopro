// 2024/03/26
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    n = s.size();
    for (int i = 0; i < 6 / n; i++)
    {
        cout << s;
    }
    cout << endl;
}