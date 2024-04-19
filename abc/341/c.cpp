// 2024/04/19
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;
    vector<vector<char>> area(h, vector<char>(w));
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cin >> area[j][i];
        }
    }
    int x;
    int y;
    int ans = 0;
    for (int j = 1; j < h - 1; j++)
    {
        for (int i = 1; i < w - 1; i++)
        {
            x = i;
            y = j;
            bool check = true;
            if (area[j][i] == '.')
            {
                for (int k = 0; k < n; k++)
                {
                    if (t[k] == 'L')
                    {
                        x--;
                    }
                    else if (t[k] == 'R')
                    {
                        x++;
                    }
                    else if (t[k] == 'U')
                    {
                        y--;
                    }
                    else
                    {
                        y++;
                    }
                    if (0 <= x && 0 <= y)
                    {
                        if (area[y][x] == '#')
                        {
                            check = false;
                            break;
                        }
                    }
                }
                if (check == true)
                {
                    ans++;
                }
            }
        }
    }
    cout << ans << endl;
}