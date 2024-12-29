#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    char c1,c2;
    string s;
    cin>>n>>c1>>c2>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]!=c1){
            cout<<c2;
        }else{
            cout<<c1;
        }
    }
    cout<<endl;
}