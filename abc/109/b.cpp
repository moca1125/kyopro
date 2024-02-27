// 2024/02/27
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> w(n);
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> w.at(i);
    }

    bool same_string = true;
    int j;
    for (j = 0; j < n - 1; j++)
    {
        for (i = j + 1; i < n; i++)
        {
            if (w.at(j) == w.at(i))
            {
                same_string = false;
                cout << "No" << endl;
                return 0;
            }
        }
    }

    bool siritori = true;
    for (i = 1; i < n; i++)
    {
        if (w.at(i).substr(0, 1) == w.at(i - 1).substr(w.at(i - 1).size() - 1))
        {
        }
        else
        {
            siritori = false;
            cout << "No" << endl;
            return 0;
        }
    }
    if (same_string == siritori == true)
    {
        cout << "Yes" << endl;
    }

    return 0;
}