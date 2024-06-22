// 2024/06/22
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num = 0;
    vector<string> s(n);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        if (s[i] == "Takahashi")
        {
            num++;
        }
    }
    cout << num << endl;
}