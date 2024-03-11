// 2024/03/11
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> s(n);
    int num = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        cin >> s.at(i);
        if (s.at(i) == "For")
        {
            num++;
        }
    }
    if ((n / 2) + 1 <= num)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}