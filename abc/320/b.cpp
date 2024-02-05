// 2024/02/05
#include <bits/stdc++.h>
using namespace std;

bool search(string sub);

int main()
{
    string s;
    int n;
    int i, j, k;
    cin >> s;
    n = s.size();

    int res = 1;
    for (i = 0; i < n; i++)
    { // 部分文字列開始位置
        for (j = i + 1; j <= n; j++)
        {                    // 部分文字列終了位置
            string sub = ""; // 初期化
            for (k = i; k < j; k++)
            {
                sub += s.at(k); // ここで部分文字列を保存する
                // 開始位置iから終了位置jまでの部分文字列を作成する

                // 部分文字列subについて調べる
                if (search(sub))
                { // return trueならこのif文に入る
                    res = max(res, j - i);
                    /*現在位の最長回文部分文字列の長さ(res)と，現在の部分文字列sub
                    の長さ(j-i)を比較し，より大きい方をresに格納する．
                    */
                }
            }
        }
    }
    cout << res << endl;
}

bool search(string t)
{
    int m = (int)t.size();

    // iはtの先頭から右へ，jはtの先頭から左へ
    for (int i = 0, j = m - 1; i < j; i++, j--)
    {
        if (t[i] != t[j])
            return false;
    }
    return true;
}
