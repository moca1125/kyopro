// 2024/03/03
// 解説AC
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    cin.ignore(); // 入力最後の改行を無視する
                  // 改行文字を無視してバッファをクリアするため
                  // 次の入力操作に影響を与えないため．
    int i;
    set<string> st; // 重複なしの順序付き集合を定義
    for (i = 0; i < n; i++)
    {
        string s;
        getline(cin, s); // sに一行ずつ入力させる
        st.insert(s);    // sが集合stに存在しない場合，sが集合stに挿入され，要素数が1増える
    }
    /*
    // 集合stの各要素を出力する
    for (const auto &element : st) // const autoで型を予測 //stがelementにコピーされる
                                   //&elementはポインタ渡し．はじめの値から変更されない
    {
        cout << element << endl;
    }
    */
    cout << st.size() << endl;
}