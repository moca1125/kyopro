// 2024/03/19
//
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> p(n);
    int num = 1;
    for (auto &ai : p)
    {
        cin >> ai;
        if (ai == x)
        {
            cout << num << endl;
        }
        num++;
    }
}