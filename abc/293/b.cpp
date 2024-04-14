// 2024/04/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num;
    vector<int> ans(n);
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (ans[i] == 0)
        {
            ans[num - 1] = 1;
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 0)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}