#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> count(13,0);
    
    for(int i=0;i<4;i++){
        int n;
        cin>>n;
        count[n-1]++;
    }

    for(int i=0;i<13;i++){
        if(count[i]==2){
            for(int j=i+1;j<13;j++){
                if(count[j]==2 ){
                    cout<<"Yes"<<endl;
                    return 0;
                }
            }
        }
        else if(count[i]==3){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}