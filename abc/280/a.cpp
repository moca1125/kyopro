// 2024/03/19
// 自力AC
#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    int num = 0;
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cin >> s[j][i];
            if (s[j][i] == '#')
            {
                num++;
            }
        }
    }
    cout << num << endl;
}