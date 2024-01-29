// 2024/01/29

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> data(5);
    int num;
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }
    num = 0;
    for (int i = 1; i < 5; i++)
    {
        if (data.at(i - 1) == data.at(i))
        {
            cout << "YES" << endl;
            num++;
            break;
        }
    }

    if (num != 1)
        cout << "NO" << endl;
}
