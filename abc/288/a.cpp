// 2024/03/06
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i) >> b.at(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a.at(i) + b.at(i) << endl;
    }
}