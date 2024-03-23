// 2024/03/24
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w, b;
    cin >> w >> b;
    int count_w = 0;
    int count_b = 0;
    string s = "wbwbwwbwbwbw";
    string S;
    int n = 0;
    while (n <= 100)
    {
        S += s;
        n++;
    }

    for (int j = 0; j < S.size() - w - b + 1; j++)
    {
        for (int i = j; i < j + w + b; i++)
        {
            if (S[i] == 'w')
            {
                count_w++;
            }
            else
            {
                count_b++;
            }
        }
        if (count_w == w && count_b == b)
        {
            cout << "Yes" << endl;
            return 0;
        }
        count_w = 0;
        count_b = 0;
    }
    cout << "No" << endl;
}
