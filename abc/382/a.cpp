#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,d;
    cin>>n>>d;
    string s;
    cin>>s;
    int empty=d;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            empty++;
        }
    }
    cout<<empty<<endl;

}