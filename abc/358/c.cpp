// 2024/06/15
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    string sum;
    for (int i = 0; i < m; i++)
    {
        sum[i] = 'x';
    }

    vector<string> ans(n, sum);

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int N, M;
//     cin >> N >> M;

//     vector<set<int>> stores(N);
//     for (int i = 0; i < N; ++i) {
//         string S;
//         cin >> S;
//         for (int j = 0; j < M; ++j) {
//             if (S[j] == 'o') {
//                 stores[i].insert(j);
//             }
//         }
//     }

//     int minStores = N + 1; // 訪れる売り場の最小値を初期化
//     for (int bit = 1; bit < (1 << N); ++bit) {
//         set<int> coveredFlavors;
//         for (int i = 0; i < N; ++i) {
//             if (bit & (1 << i)) {
//                 coveredFlavors.insert(stores[i].begin(), stores[i].end());
//             }
//         }
//         if (coveredFlavors.size() == M) {
//             minStores = min(minStores, __builtin_popcount(bit));
//         }
//     }

//     cout << minStores << endl;

//     return 0;
// }
