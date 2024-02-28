// 2024/02/28
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, w;
    cin >> n >> w;
    vector<int> a(n);
    vector<int> val(n * n * n, 10 * 10 * 10 * 10 * 10 * 10 + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    int i, j, k;
    int ans = 0;
    // 3つ選ぶ
    if (3 <= n)
    {
        for (j = 0; j < n - 2; j++)
        {
            for (i = j + 1; i < n - 1; i++)
            {
                for (k = i + 1; k < n; k++)
                {
                    if (a.at(i) + a.at(j) + a.at(k) <= w)
                    {
                        val.at(ans) = a.at(i) + a.at(j) + a.at(k);
                        ans++;
                    }
                }
            }
        }
    }
    // 2つ選ぶ
    if (2 <= n)
    {
        for (j = 0; j < n - 1; j++)
        {
            for (i = j + 1; i < n; i++)
            {

                if (a.at(i) + a.at(j) <= w)
                {
                    val.at(ans) = a.at(i) + a.at(j);
                    ans++;
                }
            }
        }
    }
    // 1つ選ぶ
    for (i = 0; i < n; i++)
    {

        if (a.at(i) <= w)
        {
            val.at(ans) = a.at(i);
            ans++;
        }
    }

    sort(val.begin(), val.end());
    val.erase(unique(val.begin(), val.end()), val.end());

    cout << val.size() - 1 << endl;
}