// 2024/03/18
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long ans;
    for (long long int i = 0; i <= 1000; i++)
    {
        for (long long j = 0; j <= 1000; j++)
        {
            ans = pow(2, i) * pow(3, j);
            if (ans == n)
            {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}