// 2024/04/20
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    unordered_map<int, int> pos;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        pos[A[i]] = i; // 要素の現在の位置を記録
    }

    vector<pair<int, int>> ans;
    for (int i = 0; i < N; i++)
    {
        if (A[i] != i + 1)
        {
            int j = pos[i + 1]; // 正しい位置を取得
            ans.emplace_back(i + 1, j + 1);
            swap(A[i], A[j]);
            pos[A[i]] = i; // 位置を更新
            pos[A[j]] = j;
        }
    }

    cout << ans.size() << endl;
    for (const auto &[a, b] : ans)
    {
        cout << a << " " << b << endl;
    }

    return 0;
}