// 2024/03/04
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<char> s(n);
    const int max_n = 2 * 100000 + 1;
    vector<vector<long long int>> mas(max_n, vector<long long int>(max_n, 0));
    int i;
    int x = 0, y = 0;

    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }

    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
        if (s.at(i) == 'R')
        {
            x++;
            mas.at(y).at(x)++;
        }
        else if (s.at(i) == 'L')
        {
            x--;
            mas.at(y).at(x)++;
        }
        else if (s.at(i) == 'U')
        {
            y++;
            mas.at(y).at(x)++;
        }
        else if (s.at(i) == 'D')
        {
            y--;
            mas.at(y).at(x)++;
        }
    }

    int j;
    bool ans = true;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < n; i++)
        {
            if (2 <= mas.at(j).at(i))
            {
                ans = false;
                break;
            }
        }
    }

    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}