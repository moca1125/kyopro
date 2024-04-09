// 2024/04/09
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<char> s(n);
    vector<char> t(m);
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> t[i];
    }
    bool ans_begin = true;
    bool ans_end = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            ans_begin = false;
        }
    }
    int j = m;
    for (int i = n - 1; 0 <= i; i--)
    {

        j--;
        if (s[i] != t[j])
        {
            ans_end = false;
        }
    }
    if (ans_begin == true && ans_end == true)
    {
        cout << "0" << endl;
    }
    else if (ans_begin == true && ans_end == false)
    {
        cout << "1" << endl;
    }
    else if (ans_end == true && ans_begin == false)
    {
        cout << "2" << endl;
    }
    else
    {
        cout << "3" << endl;
    }
}