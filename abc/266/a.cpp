// 2024/04/05
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int size = s.size();
    cout << s[((size + 1) / 2) - 1] << endl;
}