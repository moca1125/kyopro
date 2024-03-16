// 2024/03/16
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int alice = 0, bob = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            alice += a.at(n - i - 1);
        }
        else
        {
            bob += a.at(n - i - 1);
        }
    }

    cout << alice - bob << endl;
}

/*鹿本
・ranged-based for文
vectorの各要素に対して処理をする．
auto& aiはa内の各要素への参照を表す編すで，vectorｓの先頭から順に各要素が代入される

vector<int> a(n);
for(auto&ai : a){
    cin>>ai;
}

・降順ソート
sort(a.begin(),a.end(),greater<int>());
*/