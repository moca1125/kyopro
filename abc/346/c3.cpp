#include <iostream>
#include <vector>
using namespace std;
// 解説AC

int main()
{
    int N, K;
    cin >> N >> K;

    vector<bool> included(K + 1, false); // 1からKまでの整数が含まれているかを記録する配列

    for (int i = 0; i < N; ++i)
    {
        int num;
        cin >> num;
        if (num <= K)
        {
            included[num] = true; // Aの要素が1からKの範囲内にある場合にのみ記録する
        }
    }

    long long sum = 0;
    for (int i = 1; i <= K; ++i)
    {
        if (!included[i])
        {
            sum += i;
        }
    }

    cout << sum << endl;

    return 0;
}
