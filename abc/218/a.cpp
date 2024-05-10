// 2024/05/10
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> s(7);
    for (int i = 0; i < 7; i++)
    {
        cin >> s[i];
    }
    if (s[n - 1] == 'o')
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}