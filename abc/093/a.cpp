//2024/07/06
//
#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	bool ans1=false;
	bool ans2=false;
	bool ans3=false;
	for(int i=0;i<3;i++){
		if(s[i]=='a'){
			ans1=true;
		}else if(s[i]=='b'){
			ans2=true;
		}else if(s[i]=='c'){
			ans3=true;
		}
	}
	if(ans1==true&&ans2==true&&ans3==true){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

}
