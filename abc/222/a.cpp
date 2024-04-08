// 2024/04/08
// 自力AC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    if (n.size() == 3)
    {
        cout << "0";
    }
    else if (n.size() == 2)
    {
        cout << "00";
    }
    else if (n.size() == 1)
    {
        cout << "000";
    }
    cout << n << endl;
}