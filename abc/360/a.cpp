//2024/07/24
//
#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int r,m;
	for(int i=0;i<3;i++){
		if(s[i]=='R'){
			r=i;
		}else if(s[i]=='M'){
			m=i;
		}
	}
	
	if(r<m){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}


}
