// 2024/03/20
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> h(n);
    int comp = 0;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        if (i == 0)
        {
            comp = h[i];
        }
        else if (comp < h[i])
        {
            comp = h[i];
            num = i + 1;
        }
    }
    cout << num << endl;
}