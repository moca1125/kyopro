//2024/0525
//
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> check{1,2,3};
    if(a==b){
cout<<-1<<endl;
return 0;
    }else{
    check[a-1]=0;
    check[b-1]=0;
    for(int i=0;i<3;i++){
if(check[i]!=0){
cout<<check[i]<<endl;
}
    }
    }
}