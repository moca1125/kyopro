// 2024/05/18
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int check = 0;
    vector<string> s(n);
    vector<int> c(n);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> c[i];
        check += c[i];
    }

    int mod = check % n;
    sort(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        if (mod == i)
        {
            cout << s[i] << endl;
            return 0;
        }
    }
}