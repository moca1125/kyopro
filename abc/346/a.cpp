// 2024/03/24
// 自力AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &ai : a)
    {
        cin >> ai;
    }

    for (int i = 0; i < n - 1; i++)
    {
        cout << a[i] * a[i + 1] << " ";
    }
    cout << endl;
}