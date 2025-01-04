#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    long long int l,r;
    cin>>l>>r;
    long long int ans=0;
    char sentou;
    
    for(long long int i=l;i<=r;i++){
        bool flag=true;
        string a=to_string(i);
        sentou=a[0]-'0';
        for(long long int j=1;j<a.size();j++){
            if(sentou<=a[j]-'0'){
                flag=false;
                break;
            }
        }
        if(flag){
            ans++;
        }
    }
    cout<<ans<<endl;
}