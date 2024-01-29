// 2024/01/29
// 多重for bopl型

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A(3), B(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> A.at(i);
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> B.at(i);
    }

    // 答えを保持する変数
    bool answer = false;

    // これと一緒
    /*
    for (int i = 0; i < 3; i++) {
    if (A.at(i) == B.at(0) || A.at(i) == B.at(1) || A.at(i) == B.at(2)) {
        answer = true;
    }
    */

    // boolはまたはを見る(?)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (A.at(i) == B.at(j))
            {
                answer = true;
            }
        }
    }

    if (answer)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
