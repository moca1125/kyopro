#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans;
	ans=c-a+b;
	if(0<=ans){
		cout<<ans<<endl;
	}else{
		cout<<0<<endl;
	}
}
