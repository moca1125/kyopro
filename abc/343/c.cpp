// 2024/03/02
//
#include <bits/stdc++.h>
using namespace std;

bool check(long long int n);

int main()
{
    long long int n;
    cin >> n;
    long long ans = 0;
    long long int i;
    for (i = 1; i * i * i <= n; i++)
    {
        if (check(i * i * i)) // check関数(引数i*i*i)がtrueならif文もtrue
        {
            ans = i * i * i; // 回文だったらansに代入
        }
    }
    cout << ans << endl;
}

bool check(long long int n)
{
    string s = to_string(n);     // int型をstring型に変換
    string t = s;                // sをtにコピー
    reverse(t.begin(), t.end()); // sを逆順にする
    return s == t;               // s==tだったらtrueが返る　回文かどうか判断
}