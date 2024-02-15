// 2024/02/15
// 自力AC
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<char> a(1);
    cin >> s;
    int i, len;
    len = s.size();
    for (i = 0; i < len; i++)
    {
        a.at(0) = s.at(i) - 32;
        cout << a.at(0);
    }
    cout << endl;
}

// 解説
// Cにcを大文字変換したものを代入
// char C=toupper(c);

/*
#include <bits/stdc++.h>
using namespace std;

int main() {

    string S;
    cin>>S;

    string T = "";

    for(int i=0;i<S.size();i++)T += toupper(S[i]);

    cout<<T<<endl;

    return 0;
}
*/