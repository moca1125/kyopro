// 2024/03/09

#include <bits/stdc++.h>
using namespace std;

string remove(string s)
{
    int begin = s.find('|');
    int end = s.find('|', begin + 1);

    s.erase(begin, end - begin + 1);

    return s;
}

int main()
{
    string S;
    cin >> S;

    string ans = remove(S);
    cout << ans << endl;

    return 0;
}
