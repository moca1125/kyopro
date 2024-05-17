// 2024.05/17
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    int ans = (int)(a * 10) % 10;
    cout << (int)a;
    if (0 <= ans && ans <= 2)
    {
        cout << "-" << endl;
    }
    else if (3 <= ans && ans <= 6)
    {
        cout << endl;
    }
    else
    {
        cout << "+" << endl;
    }
}
