#include <bits/stdc++.h>
using namespace std;

bool checkExistence(int w, int b)
{
    int div = (w + b) % 12;
    string = "wbwbwwbwbwbw";
    for (int i = 0; i < div; i++)
    {
        }
}

int main()
{
    int w, b;
    cin >> w >> b;
    int count_w = 0;
    int count_b = 0;
    string s = "wbwbwwbwbwbw";

    if (w + b <= s.size())
    {
        for (int j = 0; j < s.size() - w - b; j++)
        {
            for (int i = j; i < j + w + b; i++)
            {
                if (s[i] == 'w')
                {
                    count_w++;
                }
                else
                {
                    count_b++;
                }
            }
            if (count_w == w && count_b == b)
            {
                cout << "Yes" << endl;
                return 0;
            }
            count_w = 0;
            count_b = 0;
        }
        cout << "No" << endl;
    }
    else
    {
        if (checkExistence(w, b))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}