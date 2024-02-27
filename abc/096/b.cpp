// 2024/02/27
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> s(3);
    int k;
    cin >> s.at(0) >> s.at(1) >> s.at(2) >> k;
    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s.at(0) * (2 << k - 1) + s.at(1) + s.at(2) << endl;
}