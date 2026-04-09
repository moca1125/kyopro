#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int h, w, x, y;
    cin >> h >> w >> x >> y;

    // マップを格納。s[row][col] = s[y][x]
    vector<vector<char>> s(h, vector<char>(w));

    // 踏んだ '@' を記録するカウント用
    vector<vector<int>> count(h, vector<int>(w, 0));

    // 入力を受け取る
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            cin >> s[row][col];
        }
    }
    
    // 操作の文字列
    string t;
    cin >> t;

    // 1-based => 0-based に補正
    // y は row, x は col だと考える
    x--;
    y--;

    // 現在位置で '@' を踏んだら記録
    if (s[y][x] == '@') {
        count[y][x] = 1;
    }

    // 移動処理
    for (int k = 0; k < (int)t.size(); k++) {
        if (t[k] == 'U') {
            // 上へ = y-1 が有効範囲かつ、移動先が '.' or '@' なら進む
            if (y - 1 >= 0 && (s[y - 1][x] == '.' || s[y - 1][x] == '@')) {
                y--;
            }
        }
        else if (t[k] == 'D') {
            if (y + 1 < h && (s[y + 1][x] == '.' || s[y + 1][x] == '@')) {
                y++;
            }
        }
        else if (t[k] == 'L') {
            if (x - 1 >= 0 && (s[y][x - 1] == '.' || s[y][x - 1] == '@')) {
                x--;
            }
        }
        else if (t[k] == 'R') {
            if (x + 1 < w && (s[y][x + 1] == '.' || s[y][x + 1] == '@')) {
                x++;
            }
        }

        // 現在位置で '@' を踏んだら記録
        if (s[y][x] == '@') {
            count[y][x] = 1;
        }
    }

    // 踏んだ '@' の数をカウント
    int tuka = 0;
    for (int row = 0; row < h; row++) {
        for (int col = 0; col < w; col++) {
            if (count[row][col] == 1) {
                tuka++;
            }
        }
    }

    // 最終地点 (x+1, y+1) と 踏んだ '@' の数 tuka の出力
    cout << y + 1 << " " << x + 1 << " " << tuka << endl;

    return 0;
}
