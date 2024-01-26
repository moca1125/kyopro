//2024/01/26
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int i;
    int num1,num2,num3;
    cin >>s;

    num1=0,num2=0,num3=0;
    for(i=1;i<8;i++){
        if(s[i-1]<=s[i]){
        }
        else {
            num1++;
            
        }
        if(s[0]%25==0&&s[i]%25==0){
        }
        else {
            num2++;
        }
        if((100<=s[0]&&s[0]<=675)&&(0<=s[i]&&s[i]<=675)){
        }
        else{
            num3++;
        }
    }
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    if(num1==0&&num2==0&&num3==0) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;


}