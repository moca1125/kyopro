// 2024/03/20
//
#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    vector<int> backet(101, 0); // 鏡餅の段数分確保
    for (auto ai : d)
    {
        cin >> ai;
        backet[ai] = 1; // 重複も関係なく全て1になる
    }

    int result = 0;
    // 1の数を数える
    for (auto val : backet)
    {
        result += val;
    }
    cout << result << endl;
}