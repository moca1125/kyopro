// 2024/06/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    int tmp1 = x, tmp2 = y;
    x = y;
    y = tmp1;
    x = z;
    z = tmp2;
    cout << x << " " << y << " " << z << endl;
}