// 2024/03/20
// set 重複を許さない順序付き集合

#include <iostream>
#include <set>
#define _GLIBCXX_DEBUG
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<int> s;

    for (int i = 0; i < n; i++)
    {
        int d;
        cin >> d;
        s.insert(d);
    }
    // 重複を許さないからsizeで良い
    cout << s.size() << endl;
}
