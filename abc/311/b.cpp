// 2024/02/09
// 未AC

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    vector<vector<int>> count(n, vector<int>(d));
    vector<int> ans(d);
    int i, j, num;
    num = 0;
    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
        if (s.at(n) == 'o')
        {
            count.at(num).at(i)++;
        }
        num++;
    }

    for (j = 0; j < n; j++)
    {
        for (i = 0; i < d; i++)
        {
        }
    }
}