// 2024/03/02
//
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int i, j, k, m;
    bool ans = false;
    int keta;
    for (i = 1; i <= n; i++)
    {
        k = i;
        if (k <= n && int(k * *(1 / 3)) == (double)(k * *(1 / 3)))
        {
            keta = log10(k) + 1;
            vector<int> s(keta);
            for (j = 1; j <= keta; j++)
            {
                if (j != 1) // ÷0避ける
                {
                    s.at(j - 1) = k / (int)pow(10, (keta - j));
                }
                else
                {
                    s.at(0) = k;
                }
            }
            for (j = 1; j <= keta; j++)
            {
                if (s.at(j - 1) != s.at(keta - j))
                {
                    break;
                }
            }

            if (j == keta)
            {
                ans = true;
                for (m = 0; m < keta; m++)
                {
                    cout << s.at(m);
                }
                cout << endl;
                break;
            }
        }
        if (ans == true)
        {
            break;
        }
    }

    return 0;
}