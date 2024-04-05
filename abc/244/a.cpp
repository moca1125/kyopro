// 2024/04/05
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    cout << s[n - 1] << endl;
}