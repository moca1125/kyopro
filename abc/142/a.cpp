// 2024/06/25
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            count++;
        }
    }
    cout << count / n << endl;
}