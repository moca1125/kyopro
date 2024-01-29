// 2024/01/29
// コンテナ
// string型の変数に対して、1文字ずつ処理したい場合
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "hello";
    for (char c : str)
    {
        if (c == 'l')
        {
            c = 'L';
        }
        cout << c;
    }
    cout << endl;
}
// heLLo
