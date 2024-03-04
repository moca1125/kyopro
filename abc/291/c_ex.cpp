// 2024/03/05
// 解説
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    set<pair<int, int>> used({{0, 0}}); // 任意の型の集合を扱える　連想コンテナの一つ
                                        // 重複を許していない
    int x = 0;
    int y = 0;
    for (auto c : s)
    { // sの型を推測してcに代入する
        if (c == 'U')
            y++;
        if (c == 'D')
            y--;
        if (c == 'R')
            x++;
        if (c == 'L')
            x--;
        if (used.find({x, y}) != used.end()) // セット内に(x,y)が存在しないときused.end()を返すので．used.end()でないとき==セット内に(x,y)が存在するとき
        {
            cout << "Yes" << endl;
            /*
            used.find({x,y}) は、used セット内で (x, y) の座標を検索する。
            もしセット内に (x, y) が存在する場合、この関数はその要素へのイテレータを返す。
            もしセット内に (x, y) が存在しない場合は、used.end() を返します。end() はセットの末尾を示すイテレータである。

            used.find({x,y}) != used.end() は、セット内に (x, y) 座標が存在する場合に true を返し、存在しない場合には false を返す。
            */
            return 0;
        }
        used.insert({x, y}); // 挿入する
    }
    cout << "No" << endl;
}