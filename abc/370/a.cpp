#include<iostream>
using namespace std;

int main(){
	int l,r;
	cin>>l>>r;
	if(l==1&&r==0){
		cout<<"Yes"<<endl;
	}else if((l==0&&r==0)||(l==1&&r==1)){
		cout<<"Invalid"<<endl;
	}else{
		cout<<"No"<<endl;
	}




}
