//2024/07/07
//
#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	string y;
	for(int i=0;i<4;i++){
		y+=s[i];

	}
	string m;
	for(int i=4;i<s.size();i++){
		m+=s[i];
	}
	int year=stoi(y);
	cout<<year+1<<m<<endl;

}
