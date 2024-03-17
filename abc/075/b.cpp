// 2024/03/17
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<char>> s(h, vector<char>(w));
    vector<vector<int>> ans(h, vector<int>(w, 0));
    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            cin >> s.at(j).at(i);
        }
    }

    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            if (s.at(j).at(i) != '#')
            {
                if (0 <= (j - 1) && 0 <= (i - 1))
                {
                    if (s.at(j - 1).at(i - 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (0 <= i - 1)
                {
                    if (s.at(j).at(i - 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (j + 1 < h)
                {
                    if (s.at(j + 1).at(i) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (i + 1 < w)
                {
                    if (s.at(j).at(i + 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (0 <= j - 1 && i + 1 < w)
                {
                    if (s.at(j - 1).at(i + 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (j + 1 < h && 0 <= i - 1)
                {
                    if (s.at(j + 1).at(i - 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (j + 1 < h && i + 1 < w)
                {
                    if (s.at(j + 1).at(i + 1) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
                if (0 <= j - 1)
                {
                    if (s.at(j - 1).at(i) == '#')
                    {
                        ans.at(j).at(i)++;
                    }
                }
            }
        }
    }

    for (int j = 0; j < h; j++)
    {
        for (int i = 0; i < w; i++)
        {
            if (s.at(j).at(i) == '#')
            {
                cout << "#";
            }
            else
            {
                cout << ans.at(j).at(i);
            }
        }
        cout << endl;
    }
}