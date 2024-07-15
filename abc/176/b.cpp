//2024/07/15
//
#include<iostream>
#include<string>
using namespace std;

int main(){
	string n;
	cin>>n;
	int ans=0;	
	for(int i=0;i<n.size();++i){
		ans+=n[i]-'0';
	}
	if(ans%9==0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

}
