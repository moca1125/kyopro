// 2024.05/17
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    cin >> a;
    int ans = a * 10 % 10;
    cout << (int)a;
    if (1 <= ans && ans <= 2)
    {
        cout << "-" << endl;
    }
    else if (3 <= ans && ans <= 6)
    {
        cout << endl;
    }
}
else