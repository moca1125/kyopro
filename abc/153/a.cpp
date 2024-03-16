// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, a;
    cin >> h >> a;
    int num = 0;
    while (0 < h)
    {
        h -= a;
        num++;
    }
    cout << num << endl;
}