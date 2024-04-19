// 2024/04/19
// 解説AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    set<string> st;
    for (int j = 0; j < s.size(); j++)
    {
        for (int i = 0; i < s.size(); i++)
        {
            st.insert(s.substr(j, i));
        }
    }
    cout << st.size() << endl;
}