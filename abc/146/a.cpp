// 2024/06/24
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> s = {"MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
    string n;
    cin >> n;
    int num = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == n)
        {
            if (i == 6)
            {
                cout << "7" << endl;
            }
            else
            {
                cout << 7 - i - 1 << endl;
            }
        }
    }
}