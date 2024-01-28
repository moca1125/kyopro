// 2024/01/28

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    // malloc取らなくていいよ～～～！！！！
    vector<int> math(N);    // N個の数学の点数データ
    vector<int> english(N); // N個の英語の点数データ

    // 数学の点数データを受け取る
    for (int i = 0; i < N; i++)
    {
        cin >> math.at(i);
    }

    // 英語の点数データを受け取る
    for (int i = 0; i < N; i++)
    {
        cin >> english.at(i);
    }

    // 合計点を出力
    for (int i = 0; i < N; i++)
    {
        cout << math.at(i) + english.at(i) << endl;
    }

    // その他の機能
    // vector<int> vec(3, 5);と書いた場合、
    // 配列変数vecは{5, 5, 5}で初期化される

    // 要素の追加
    /*
    vector<int> vec = { 1, 2, 3 };
    vec.push_back(10); // 末尾に10を追加
    */

    // 要素の削除
    // vec.pop_back(); // 末尾の要素を削除
}
