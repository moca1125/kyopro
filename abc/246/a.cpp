// 2024/04/04
//  自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> x(3);
    vector<int> y(3);
    vector<int> ans_x(205), ans_y(205);
    int X, Y;

    for (int i = 0; i < 3; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i <= 200; i++)
        {
            if (x[j] + 100 == i)
            {
                ans_x[i]++;
            }
            if (y[j] + 100 == i)
            {
                ans_y[i]++;
            }
        }
    }

    for (int i = 0; i <= 200; i++)
    {
        if (ans_x[i] == 1)
        {
            X = i - 100;
        }
        if (ans_y[i] == 1)
        {
            Y = i - 100;
        }
    }
    cout << X << " " << Y << endl;
}