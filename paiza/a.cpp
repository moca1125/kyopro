#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int a, b;
    vector<int> tmp(100001);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= b; j++)
        {
            tmp[j] = 1;
        }
    }

    int ans = 0;
    int cmp = 0;
    for (int i = 0; i <= 100000; i++)
    {

        if (tmp[i + 1] == 1)
        {
            cmp++;
        }
        else
        {
            if (ans < cmp)
            {
                ans = cmp;
            }
            cmp = 0;
        }
    }

    cout << ans << endl;
    return 0;
}