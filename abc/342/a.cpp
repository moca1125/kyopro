// 2024/02/24
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;
    for (i = 2; i < s.size(); i++)
    {

        if (s.at(i - 2) != s.at(i))
        {

            if (s.at(i) == s.at(i - 1))
            {
                cout << i - 1 << endl;
                break;
            }
            else if (s.at(i) != s.at(i - 1))
            {
                cout << i + 1 << endl;
                break;
            }
        }
        else
        {

            if (s.at(i) != s.at(i - 1))
            {
                cout << i << endl;
                break;
            }
        }
    }
}