#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> num(s.size());
    for(int i=0;i<s.size();i++){
        
        num[i]=(int)(s[i]-'0');
    }
    int ans=0;
    for(int i=0;i<s.size();i++){
        ans+=num[i];
    }
    cout<<ans<<endl;
    return 0;
}