#include <bits/stdc++.h>
using namespace std;

bool checkExistence(int w, int b)
{
    string S = "wbwbwwbwbwbw";
    int n = S.length();
    int cntW = 0, cntB = 0;
    int left = 0, right = 0;

    while (true)
    {
        // ウィンドウ内の文字を処理
        while (right < n)
        {
            if (S[right] == 'w')
            {
                cntW++;
            }
            else
            {
                cntB++;
            }

            // ウィンドウ内のカウントがw,bを超えた場合は左を動かして調整
            while (cntW > w)
            {
                if (S[left] == 'w')
                {
                    cntW--;
                }
                left++;
            }
            while (cntB > b)
            {
                if (S[left] == 'b')
                {
                    cntB--;
                }
                left++;
            }

            // ウィンドウ内にw個のwとb個のbが含まれていればtrue
            if (cntW == w && cntB == b)
            {
                return true;
            }

            right++;
        }

        // 文字列Sを1周繰り返す
        right = 0;
        left = 0;
        cntW = 0;
        cntB = 0;
    }

    return false;
}

int main()
{
    int w, b;
    cin >> w >> b;

    if (w + b < 1 || w > 100 || b > 100)
    {
        cout << "Invalid input" << endl;
        return 0;
    }

    if (checkExistence(w, b))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}