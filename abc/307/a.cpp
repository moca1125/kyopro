#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i, num, num2;
    cin >> n;
    vector<int> a(7 * n + 1);
    vector<int> ans(n + 1);
    for (i = 0; i < 7 * n; i++)
        cin >> a.at(i);

    num = 0, num2 = 1;
    for (i = 0; i < 7 * n; i++)
    {
        ans.at(num) += a.at(i);
        if (num2 % 7 == 0 && num2 != 0)
        {
            cout << ans.at(num);
            if (i != 7 * n - 1)
            {
                cout << " ";
            }
            num++;
            num2 = 0;
        }
        num2++;
    }
    cout << endl;
}