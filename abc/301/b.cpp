// 2024/04/15
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
    for (int j = 1; j < n; j++)
    {
        cout << a[j - 1] << " ";
        if (1 < abs(a[j - 1] - a[j]))
        {
            if (a[j - 1] < a[j])
            {
                for (int i = a[j - 1] + 1; i < a[j]; i++)
                {
                    cout << i << " ";
                }
            }
            else if (a[j - 1] > a[j])
            {
                for (int i = a[j - 1] - 1; a[j] < i; i--)
                {
                    cout << i << " ";
                }
            }
        }
    }
    cout << a[n - 1] << endl;
}