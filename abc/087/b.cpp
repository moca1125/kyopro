// 2024/03/17
// 自力AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int num;
    int count = 0;
    for (int i = 0; i <= a; i++)
    {
        for (int j = 0; j <= b; j++)
        {
            num = -500 * i - 100 * j + x;
            if (0 <= num && num <= 50 * c)
            {
                count++;
            }
        }
    }
    cout << count << endl;
}