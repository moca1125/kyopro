#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a+b==c || a+c==b || b+c==a || (a==b &&b==c)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
}