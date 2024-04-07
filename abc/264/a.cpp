// 2024/04/07
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l, r;
    vector<char> s = {'a', 't', 'c', 'o', 'd', 'e', 'r'};
    cin >> l >> r;
    for (int i = l - 1; i < r; i++)
    {
        cout << s[i];
    }
    cout << endl;
}