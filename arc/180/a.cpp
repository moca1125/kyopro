#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long num = 100000007;
    string s;
    string ans1;
    cin >> s;
    set<string> check;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'A')
        {
            ans1 += 'A';
        }
        else
        {
            ans1 += s[i];
        }
    }
    cout << ans1 << endl;
}