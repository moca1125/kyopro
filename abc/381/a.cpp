#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<char> s(n);
for(int i=0;i<n;i++){
    cin>>s[i];
}
    int len=s.size();
    if(len%2==0){
        cout<<"No"<<endl;
        
        return 0;
    }

    for(int i=0;i<((len+1)/2)-1;i++){
        if(s[i]!='1'){
            cout<<"No"<<endl;
            
            return 0;
        }
    }

    if(s[(len+1)/2-1]!='/'){
        cout<<"No"<<endl;
        
        return 0;
    }

    for(int i=(len+1)/2;i<len;i++){
        if(s[i]!='2'){
            cout<<"No"<<endl;
            
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}