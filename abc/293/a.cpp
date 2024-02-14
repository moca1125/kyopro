// 2024/02/14
// 解説AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    for (i = 0; i < s.size() / 2; i++)
    {
        swap(s[2 * i], s[2 * i + 1]); // swap関数使えるよ～～
    }
    cout << s << endl;
}