#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
 	int n;
	cin>>n;
	vector<string> s(n);
	int len=0;
	for(int i=0;i<n;++i){
		cin>>s[i];
		if(len<s[i].size()){
			len=s[i].size();	
		}
	}
	for(int j=0;j<len;j++){
		string check="";
	for(int i=n-1;0<=i;i--){
		string ans="";
		if(j<s[i].size()){
		ans=s[i].substr(j,1); //j番目の範囲外アクセスに注意
			check+=ans;
		}else{
			check+='*';
		}
	
	}
	if(check[check.size()-1]=='*'){
		for(int k=0;k<check.size()-1;k++){
			cout<<check[k];
		}
	}else{
		for(int k=0;k<check.size();k++){
			cout<<check[k];
		}
	}
	

	cout<<endl;
	}
	



}
