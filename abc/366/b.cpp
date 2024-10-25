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
	
	vector<string> t(len,string(n,'*'));//長nの文字列をlen個生成
	for(int j=0;j<len;j++){
	for(int i=n-1;0<=i;i--){
			t[j][i]=s[i][j];	
	}
	}
		for(int k=0;k<len;k++){
				while(t[k].back()=='*'){
						t[k].pop_back();

				}
				cout<<t[k]<<endl;
		}

}
