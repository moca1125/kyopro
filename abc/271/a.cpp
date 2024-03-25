// 2024/03/25
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<char> s;
    while (0 < n)
    {
        int div;
        div = n % 16;
        if (div < 10)
        {
            cout << "aa" << endl;
            s.push_back(div + '0');
        }
        else
        {
            s.push_back(div - 10 + 'A');
        }
        n /= 16;
    }
    reverse(s.begin(), s.end());
    for (auto &ai : s)
    {
        cout << ai;
    }
    cout << endl;
}