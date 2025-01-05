#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    vector<int> d(n);
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>d[i]>>a[i];
    }

for(int i=0;i<n;i++){
if(d[i]==1){
    if(1600<=r && r<=2799){
        r+=a[i];
    }

}else{
    if(1200<=r && r<=2399){
        r+=a[i];
    }

}   
}

    cout<<r<<endl;
}