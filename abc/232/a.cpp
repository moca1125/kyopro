// 2024/04/24
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a, b;
    a = stoi(string(1, s[0]));
    b = stoi(string(1, s[2]));
    cout << a * b << endl;
}