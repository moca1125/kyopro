#include<iostream>
#include<cassert>
using namespace std;

int main(){
	string s,t;
	int ans=0;
	cin>>s>>t;
	for(int i=0;i<3;i++){
		if(s[i]==t[i]){
			ans++;
		}
	}
	cout<<ans<<endl;
}	
