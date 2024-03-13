// 2024/03/13
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int p, q, r, s;
    cin >> n >> p >> q >> r >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    int num = q - p + 1;
    vector<int> qp(num);
    vector<int> sr(num);
    int count;
    for (int i = 0; i < n; i++)
    {
        {
            int j = p;
            count = 0;
            for (j == i + 1; j <= q; j++)
            {
                qp.at(count) = a.at(j - 1);
                count++;
            }
        }
        {
            int j = r;
            count = 0;
            for (j == i + 1; j <= s; j++)
            {
                sr.at(count) = a.at(j - 1);
                count++;
            }
            break;
        }
    }
    for (int i = 0; i < p - 1; i++)
    {
        cout << a.at(i) << " ";
    }
    for (int i = 0; i < num; i++)
    {
        cout << sr.at(i) << " ";
    }
    for (int i = q; i < r - 1; i++)
    {
        cout << a.at(i) << " ";
    }
    for (int i = 0; i < num; i++)
    {
        cout << qp.at(i) << " ";
    }
    for (int i = s; i < n; i++)
    {

        cout << a.at(i);
        if (i != n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;
}