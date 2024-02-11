#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, i, j;
    cin >> n;
    vector<long long int> s(1, n);
    long long int ans = 0;
    long long int tmp, cmp, num, len;
    long long int remove;
    num = 0;

    for (i = 0; i < s.size(); i++)
    {

        if (2 <= s.at(i))
        {
            ans += s.at(i);
            cmp = s.at(i);
            s.erase(s.begin() + i);
            tmp = (cmp / 2) - 1;
            s.push_back(tmp);
            tmp = (cmp / 2);
            s.push_back(tmp);
            len = s.size();
            for (j = 0; j < len; j++)
            {

                if (2 <= s.at(j))
                {
                }
                else
                {
                    num++;
                }
            }

            if (num == s.size())
            {
                break;
            }
        }
    }

    cout << ans << endl;
}