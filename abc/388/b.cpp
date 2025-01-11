#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int d;
    cin>>d;
    vector<int> t(n);
    vector<int> l(n);
    for(int i=0;i<n;i++){
        cin>>t[i]>>l[i];
    }
    
    for(int j=0;j<d;j++){
        int ans=0;
        for(int i=0;i<n;i++){
            if(ans<t[i]*(l[i]+j+1)){
                ans=t[i]*(l[i]+j+1);
            }
        }
        cout<<ans<<endl;
    }

}