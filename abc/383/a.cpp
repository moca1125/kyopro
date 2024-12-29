#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> t(n);
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>t[i]>>v[i];
    }
    int ans=0;
    ans+=v[0];
    for(int i=1;i<n;i++){
        ans-=(t[i]-t[i-1]);
        if(ans<0){ //水は0以下にならない
            ans=0;
        }
        ans+=v[i];
    }
    cout<<ans<<endl;
}