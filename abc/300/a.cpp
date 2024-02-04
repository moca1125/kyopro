#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int c, num;
    num = 1;
    while (n--)
    {
        cin >> c;
        if (c == (a + b))
        {
            cout << num << endl;
            break;
        }
        num++;
    }

    return 0;
}