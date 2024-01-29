// 2024/01/29
// STL (standard tmplate library)
/*
・min(a, b); // min関数 min関数にint型とstring型のペアは渡せない
・max(10, 5); //max関数
・swap(a, b); //swap関数　2つの引数の値を交換
・reverse(vec.begin(), vec.end()); // 配列の要素の並びを逆にできる
・sort(vec.begin(), vec.end());  //昇順ソート


*/

#include <bits/stdc++.h>
using namespace std;

// 降順ソート
int main()
{
    vector<int> vec = {2, 5, 2, 1};
    sort(vec.begin(), vec.end());    // {1, 2, 2, 5} ・biginとend逆ダメ
    reverse(vec.begin(), vec.end()); // {5, 2, 2, 1}

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << endl;
    }
}
