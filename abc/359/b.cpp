// 2024/06/22
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(2 * n);
    for (int i = 0; i < 2 * n; i++)
    {
        cin >> a[i];
    }

    int num = 0;
    for (int i = 0; i < 2 * n - 2; i++)
    {
        if (a[i] == a[i + 2])
        {
            num++;
        }
    }
    cout << num << endl;
}