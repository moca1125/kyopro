// 2024/06/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> ans;
    int a, b, c;
    cin >> a >> b >> c;
    ans.insert(a);
    ans.insert(b);
    ans.insert(c);
    if (ans.size() == 2)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}