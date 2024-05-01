// 2024/05/01
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= 1000; j++)
        {
            if (j * c == i)
            {
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << "-1" << endl;
}