// 2024/04/21
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int f(int t)
{
    return t * t + 2 * t + 3;
}
int main()
{
    int t;
    cin >> t;
    cout << f(f(f(t) + t) + f(f(t))) << endl;
}