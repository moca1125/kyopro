// 2024/01/27
// ・文字列の一部を書き換えるときや比較をするときは
// 　char型を使う必要がある

// ・+演算子を使うと文字列同士を連結できる

// ・string型とchar型は==で比較できない

// ・行単位での入力はgetline(cin,文字列変数)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello";

    str.at(0) = 'M';     // char型の'M'
    cout << str << endl; // Mello

    if (str.at(1) == 'e')
    {
        cout << "AtCoder" << endl;
    }

    //+演算子を使うと文字列同士を連結できる
    string hello = "Hello";

    // +演算子による連結
    cout << hello + ", world!" << endl; // Hello, world!

    // +=演算子による連結
    hello += ", AtCoder!";
    cout << hello << endl; // Hello, AtCoder!

    // 行単位での入力 空白があってもOK
    // ex) I have a pen.
    string s, t;
    getline(cin, s); // 変数sで入力を一行受け取る
    getline(cin, t); // 変数tで入力を一行受け取る

    cout << "一行目 " << s << endl;
    cout << "二行目 " << t << endl;
}
