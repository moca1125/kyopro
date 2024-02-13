// 2024/02/13
// 自力AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    int i;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
        if (a.at(i) % 2 == 0)
        {
            cout << a.at(i) << " ";
        }
    }
    // 最後スペース合っても大丈夫！！
}