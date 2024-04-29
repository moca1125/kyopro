// 2024/04/29
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 移動した距離を管理した配列
    int dx[] = {0, 1, 0, -1};
    int dy[] = {-1, 0, 1, 0};
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<char>> ans(h, vector<char>(w, '.')); // 初期値を.で埋める
    int x = 0, y = 0, m = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[y][x] == '.')
        {
            ans[y][x] = '#'; // 色を変える
            m++;
        }
        else
        {
            ans[y][x] = '.';
            m += 3;
        }
        m %= 4;
        x += dx[m];
        y += dy[m];
        // 端の処理
        if (x < 0)
            x += w;
        if (x >= w)
            x -= w;
        if (y < 0)
            y += h;
        if (y >= h)
            y -= h;
    }
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cout << ans[j][i];
        }
        cout << endl;
    }
}