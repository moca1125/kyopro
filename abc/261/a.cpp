// 2024/04/10
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l_1, r_1, l_2, r_2;
    cin >> l_1 >> r_1 >> l_2 >> r_2;

    int start_0, start_1, end_0, end_1;
    if (l_1 < l_2)
    {
        start_0 = l_1;
        start_1 = l_2;
    }
    else
    {
        start_0 = l_2;
        start_1 = l_1;
    }
    if (r_1 < r_2)
    {
        end_0 = r_1;
        end_1 = r_2;
    }
    else
    {
        end_0 = r_2;
        end_1 = r_1;
    }

    if (0 <= end_0 - start_1)
    {
        cout << end_0 - start_1 << endl;
    }
    else
    {
        cout << "0" << endl;
    }
}