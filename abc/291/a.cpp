// 2024/02/16
// 解説AC

// A-Zは65-90, a-zは97-122
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i;

    for (i = 0; i < s.size(); i++)
    {
        if (isupper(s.at(i)))
        {
            cout << (i + 1) << endl;
            break;
        }
    }
}

// 大文字判定 std::isupper
// 小文字判定 sted::islower