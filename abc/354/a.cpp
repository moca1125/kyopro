// 2024/05/18
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int h;
    cin >> h;
    long long int ans = 0;
    for (long long int i = 0; i <= h; i++)
    {
        ans += pow(2, i);
        if (h < ans)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
}