// 2024/02/28
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    vector<char> width(w + 2, '#');
    int i, j;
    for (j = 0; j < h; j++)
    {
        cin >> s.at(j);
    }

    for (i = 0; i < w + 2; i++)
    {
        cout << width.at(i);
    }
    cout << endl;
    for (i = 0; i < h; i++)
    {
        cout << "#" << s.at(i) << "#" << endl;
    }
    for (i = 0; i < w + 2; i++)
    {
        cout << width.at(i);
    }
    cout << endl;
}