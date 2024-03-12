// 2024/03/12
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    string s;
    cin >> n >> m;
    cin >> s;
    int i, x = 0;
    for (i = 0; i < n; i++)
    {
        if (s.at(i) == '0')
        {
            x++;
        }
    }
    vector<int> muzi(x + 1);
    vector<int> logo(x + 1);
    int muzi_num = 0;
    int logo_num = 0;

    for (i = 0; i < n; i++)
    {
        if (s.at(i) == '1')
        {
            muzi.at(muzi_num)++;
            logo.at(logo_num)++;
        }
        else if (s.at(i) == '2')
        {
            logo.at(logo_num)++;
        }
        else
        {
            muzi_num++;
            logo_num++;
        }
    }

    max(muzi);
    max(logo);
}