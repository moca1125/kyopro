// 2024/06/05
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(4);
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    int ans = *min_element(a.begin(), a.end());
    cout << ans << endl;
}