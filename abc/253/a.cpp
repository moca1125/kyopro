// 2024/03
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> n(3);
    n[0] = a;
    n[1] = b;
    n[2] = c;
    sort(n.begin(), n.end());

    if (n[1] == b)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}