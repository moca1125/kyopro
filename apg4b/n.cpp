// 2024/01/28
// 配列！！！！！
/*
・vector<型> 配列変数名;で配列変数を宣言できる
・配列変数名 = { 要素1, 要素2, ... };で配列変数に値を代入できる
・配列変数.at(i)でi番目の要素にアクセスできる
・配列変数.size()で配列の要素数を取得できる
・vector<型> 配列変数名(要素数)と書くと指定した要素数で配列を初期化できる
・配列でN個の入力を受け取るときは、
　N要素で初期化した後、for文の中でatを使って1ずつ受け取る

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    // 文字列
    string str; // 文字列変数を宣言

    str = "abcd"; // 'a', 'b', 'c', 'd' という文字(char)の列を代入

    cout << str.at(0) << endl; // 1つ目である'a'を出力

    cout << str.size() << endl; // 文字列の長さである4を出力

    // 配列
    vector<int> vec; // int型の配列変数vecを宣言

    vec = {25, 100, 64}; // 25, 100, 64 という整数(int)の列を代入

    cout << vec.at(0) << endl; // 1つめである25を出力

    cout << vec.size() << endl; // 配列の長さである3を出力

    // 3個の入力を受け取れるように 3要素の配列 {0, 0, 0} で初期化
    vector<int> vec2(3);

    // atを使って1つずつ入力
    cin >> vec2.at(0) >> vec2.at(1) >> vec2.at(2);

    // 和を出力
    cout << vec2.at(0) + vec2.at(1) + vec2.at(2) << endl;

    // 100要素の配列で初期化
    vector<int> vec3(100);

    // 100個の入力を受け取る
    for (int i = 0; i < 100; i++)
    {
        cin >> vec3.at(i);
    }
}
