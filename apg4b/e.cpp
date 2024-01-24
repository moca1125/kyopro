#include <bits/stdc++.h>
using namespace std;

int main() {

    int name;

    name = 10;

    int i = 30;
    double d = 1.5;
    string s = "Hello";

    cout << name << endl;     // 10
    cout << name + 2 << endl; // 10 + 2 → 12
    cout << name * 3 << endl; // 10 * 3 → 30

    cout << "\n" << endl;

    cout << i + d << endl; // 31.5
    cout << i * d << endl; // 45
    cout << 45 / 2 << endl; // 22 小数点以下切り捨て 勝手にint型になる
    cout << i * d / 2 << endl; // 22.5 小数点以下も残る double型になる

    /* stringと(int,double)は共存でない
    以下の処理はコンパイルエラー
    cout << s + i << endl; // string型とint型
    cout << s * i << endl; // string型とint型
    cout << s + d << endl; // string型とdouble型
    */
}
