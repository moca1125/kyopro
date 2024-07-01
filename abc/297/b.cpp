//2024/07/01
//
#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	string b;	
	string r;
	int k;
	bool check1=false;
	bool check2=false;
	for(int i=0;i<s.size();i++){
		if(s[i]=='B'){
			b+=to_string(i+1);	
		}
			
		if(s[i]=='R'){
			r+=to_string(i);
		}
		if(s[i]=='K'){
			k=i;
		}
	}
	int r0=r[0]-'0';
	int r1=r[1]-'0';
	if(r0<k&&k<r1){
		check2=true;
	}
	 int b0 = b[0] - '0';
        int b1 = b[1] - '0';
	if(b0%2!=b1%2){
		check1=true;
	}
	if(check1==true&&check2==true){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

}
