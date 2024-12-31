#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n1=0;
    int n2=0;
    int n3=0;
    int n=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            n1++;
        }else if(s[i]=='2'){
            n2++;
        }else if(s[i]=='3'){
            n3++;
        }else{
            n++;
        }
    }

    if(n1==1 && n2==2 && n3==3){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    return 0;

}