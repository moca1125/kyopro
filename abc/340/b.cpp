#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    vector<vector<int>> a(q, vector<int>(2));
    int i, j, num1, num2, tmp;
    for (j = 0; j < q; j++)
    {
        for (i = 0; i < 2; i++)
        {
            cin >> a.at(j).at(i);
        }
    }

    vector<int> count;
    for (j = 0; j < q; j++)
    {

        if (a.at(j).at(0) == 1)
        {
            tmp = a.at(j).at(1);
            count.push_back(tmp);
        }
        else
        {
            num1 = count.size();
            num2 = a.at(j).at(1);
            cout << count.at(num1 - num2) << " ";
        }
    }
}