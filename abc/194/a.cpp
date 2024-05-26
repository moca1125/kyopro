// 2024/05/26
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (15 <= a + b && 8 <= b)
    {
        cout << "1" << endl;
    }
    else if (10 <= a + b && 3 <= b)
    {
        cout << "2" << endl;
    }
    else if (3 <= a + b)
    {
        cout << "3" << endl;
    }
    else
    {
        cout << "4" << endl;
    }
}