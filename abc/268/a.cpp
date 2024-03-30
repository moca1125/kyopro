// 2024/03/30
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    set<int> s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    s.insert(d);
    s.insert(e);
    cout << s.size() << endl;
}