// 2024/04/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    vector<int> d(n);
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(n);
    vector<int> D(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
        A[i] = a[i];
        B[i] = b[i];
        C[i] = c[i];
        D[i] = d[i];
    }
    sort(A.begin(), A.end());
    int x_min = A[0];
    sort(B.rbegin(), B.rend());
    int x_max = B[0];
    sort(C.begin(), C.end());
    int y_min = C[0];
    sort(D.rbegin(), D.rend());
    int y_max = D[0];
    int num = 0, num2 = 0;
    vector<vector<int>> s(y_max, vector<int>(x_max));
    while (num2 < n)
    {
        for (int j = c[num2]; j < d[num2]; j++)
        {
            for (int i = a[num]; i < b[num]; i++)
            {
                s[j][i] = 1;
            }
        }
        num++;
        num2++;
    }
    for (int j = y_min; j < y_max; j++)
    {
        for (int i = x_min; i < x_max; i++)
        {
            if (s[j][i] == 1)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}