// 2024/03/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

// この解き方覚えたい
//  cout << char('A' + i);