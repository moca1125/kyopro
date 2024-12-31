#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a(4);
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    int count=0;
    for(int j=0;j<4;j++){
        for(int i=j+1;i<4;i++){
            if(a[i]==a[j]){
                count++;
            }
        }
    }
    //cout<<count<<endl;

    if(2<=count &&count%2==0){
        cout<<"2"<<endl;
    }else if(count==1 || 2<=count && count%2!=0){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
}