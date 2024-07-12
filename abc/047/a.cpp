//2024/07/12
//
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int check1=a+b;
	int check2=a+c;
	int check3=b+c;

	if(check1==c||check2==b||check3==a){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}


}
