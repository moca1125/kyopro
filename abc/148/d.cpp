// 2024/03/08
// WA
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    bool check = false;
    int i, j, num;
    for (i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    num = 1;
    int number = 0;
    int count = 0;

    for (j = 0; j < n - 1; j++)
    {
        if (a.at(number) != num)
        {
            a.erase(a.begin());
            count++;
            number = 0;
        }
        else
        {
            number++;
            num++;
        }
    }
    if (count == n - 1 && n != 1)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << count << endl;
    }
}