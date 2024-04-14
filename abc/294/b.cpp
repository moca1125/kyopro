// 2024/04/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cin >> a[j][i];
        }
    }

    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            if (a[j][i] == 0)
            {
                cout << ".";
            }
            else
            {
                cout << char('A' - 1 + a[j][i]);
            }
        }
        cout << endl;
    }
}
