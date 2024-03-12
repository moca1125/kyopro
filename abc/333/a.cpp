// 2024/03/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int i;
    long long int x;
    long long int ans;
    long long int Ans;
    for (i = 0; i < n; i++)
    {
        x = pow(10, i);
        ans = x * n;
        Ans += ans;
    }
    cout << Ans << endl;
}