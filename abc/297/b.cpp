// 2024/03/12
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> B(2);
    vector<int> R(2);
    int k;
    int i, B_num = 0, R_num = 0;
    for (i = 0; i < 8; i++)
    {
        if (s.at(i) == 'B')
        {
            B.at(B_num) = i;
            B_num++;
        }

        if (s.at(i) == 'R')
        {
            R.at(R_num) = i;
            R_num++;
        }
        if (s.at(i) == 'K')
        {
            k = i;
        }
    }

    if (B.at(0) % 2 != B.at(1) % 2 && (R.at(0) < k && k < R.at(1)))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}