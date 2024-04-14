// 2024/04/015
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char p, q;
    cin >> p >> q;
    int begin, end;
    vector<int> s = {3, 1, 4, 1, 5, 9};

    if (q < p)
    {
        int tmp;
        tmp = p;
        p = q;
        q = tmp;
        // 解説はswap(p,q);してる
    }
    else
    {
    }
    begin = p - 'A';
    end = q - 'A';
    int ans = 0;
    for (int i = begin; i < end; i++)
    {
        ans += s[i];
    }
    cout << ans << endl;
}