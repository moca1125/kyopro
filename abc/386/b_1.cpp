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
        if(num[i]==0){
            if(num[i+1]==0){
                //cout<<i<<endl;
                ans++;
                i++;
            }else{
                ans++;
            }
        }else{
            ans++;
        }
    }
    cout<<ans<<endl;

}
