//2024/07/01
//
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	vector<string> s(8);
	for(int i=0;i<8;i++){
		cin>>s[i];
	}
	for(int j=0;j<8;j++){
		string tmp=s[j];
		for(int i=0;i<8;i++){
			if(tmp[i]=='*'){
				cout<<char(i+'a');
				cout<<8-j<<endl;
			}
		}	
	}
}
