#include <iostream>
#include <string>

using namespace std;

bool checkSubstring(int W, int B)
{
    if (W == 0 || B == 0)
        return false; // W,Bのどちらかがゼロの場合はfalse

    string S = "wbwbwwbwbwbw";
    int n = S.length();
    int cntW = 0, cntB = 0;
    int remainingW = W, remainingB = B;

    while (remainingW > 0 || remainingB > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (S[i] == 'w')
            {
                cntW++;
                if (cntW <= remainingW)
                {
                    remainingW -= cntW;
                    cntW = 0;
                }
            }
            else
            {
                cntB++;
                if (cntB <= remainingB)
                {
                    remainingB -= cntB;
                    cntB = 0;
                }
            }
        }
    }

    return remainingW == 0 && remainingB == 0;
}

int main()
{
    int W, B;
    cin >> W >> B;

    if (checkSubstring(W, B))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}