#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    for(int i=0;i<d;i++){
        for(int j=0;j<n;j++){
            if(s[n-j-1]=='@'){
                s[n-j-1]='.';
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
}