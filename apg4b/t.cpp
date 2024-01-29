// 2024/01/29
// 多次元配列
// https://atcoder.jp/contests/apg4b/tasks/APG4b_t

/*
vector<vector<int>> data = {
    {7, 4, 0, 8},
    {2, 0, 3, 5},
    {6, 1, 7, 0},
};
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2, 初期値));
vector<vector<要素の型>> 変数名(要素数1, vector<要素の型>(要素数2));  // 初期値を省略

vector<vector<要素の型>> 変数名(縦の要素数, vector<要素の型>(横の要素数));
*/

// アクセス
/*
変数名.at(添字1).at(添字2)
    vector<vector<要素の型>> 変数名(縦の要素数, vector<型>(横の要素数)
*/

// N×0の二次元配列
/*
vector<vector<型>> 変数名(N);  //「要素数0の配列」の配列
*/

// Q
/*
まるばつゲームの状態がN個与えられます。
マルは'o'、バツは'x'、空白は'-'で表されます。
すべての状態の'o'の個数の和を求めてください。
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    // N × (3 × 3)要素の配列を宣言
    vector<vector<vector<char>>> data(N, vector<vector<char>>(3, vector<char>(3)));

    // 入力
    for (int i = 0; i < N; i++)
    {
        // i番目の状態を読む
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                cin >> data.at(i).at(j).at(k);
            }
        }
    }

    // 'o'の数を数える
    int count = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {

                // 「i番目の状態」「上からj番目」「左からk番目」の要素が'o'か判定
                if (data.at(i).at(j).at(k) == 'o')
                {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}

// 入力
/*

2
- - -
- x -
- o -

x o -
- o -
x - -

*/

// 出力
// 3