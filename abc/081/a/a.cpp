#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int num;
    cin >> s;

    num=0;
    if(s[0]=='1') num++;
    if(s[1]=='1') num++;
    if(s[2]=='1') num++;

    cout << num << endl;
}