// 2024/03/09
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<long long int> a;
    int r, num;
    while (true)
    {
        cin >> num;
        a.push_back(num);
        if (num == 0)
        {
            break;
        }
    }
    reverse(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout << a.at(i) << endl;
    }

    return 0;
}