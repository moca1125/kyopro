// 2024/04/27
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a(9);
    vector<int> b(8);
    int A = 0;
    int B = 0;
    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        A += a[i];
    }
    for (int i = 0; i < 8; i++)
    {
        cin >> b[i];
        B += b[i];
    }
    cout << A - B + 1 << endl;
}