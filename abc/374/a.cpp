#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int num=s.size();
	string san;
	for(int i=num-3;i<num;i++){
			san+=s[i];
	}
	if(san=="san"){
			cout<<"Yes"<<endl;
	}else{

			cout<<"No"<<endl;
	}

}
