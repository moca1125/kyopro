// 2024/04/09
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int comp;

    int num;
    for (int i = 0; i <= n; i++)
    {
        int min = 9;
        bool check = false;
        for (int j = 1; j <= 9; j++)
        {

            if (n % j == 0)
            {
                if (i % (n / j) == 0)
                {
                    check = true;
                    if (j < min)
                    {
                        min = j;
                    }
                }
            }
        }
        if (check)
        {
            cout << min;
        }
        else
        {
            cout << "-";
        }
    }
    cout << endl;
}