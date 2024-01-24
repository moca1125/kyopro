//未AC
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    int i,j,num;
    string s;
    cin >>a>>b;

    for(i=a;i<=b;i++){
        for(j=0;j<5;j++){
            if(s[i]==s[5-i]) num++;
        }

    }

}