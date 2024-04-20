// 2024/04/20
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int num = stoi(s.substr(3));
    if (num >= 1 && num <= 349 && s != "ABC316" && s != "ABC000")
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
