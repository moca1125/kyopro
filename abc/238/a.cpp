// 2024/04/14
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (pow(2, n) > n * n)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}