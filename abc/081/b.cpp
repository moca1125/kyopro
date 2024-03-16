// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    int i;
    while (count < 201)
    {
        for (i = 0; i < n; i++)
        {

            if (a.at(i) % 2 != 0)
            {
                cout << count << endl;
                return 0;
            }
            a.at(i) /= 2;
        }
        count++;
    }
    cout << count << endl;
}