#include<iostream>
using namespace std;

int main(){
	int i;
	cin>>i;
	if(i%4!=0){
		cout<<"365"<<endl;
	}else if(i%4==0 &&i%100!=0){
		cout<<"366"<<endl;

	}else if(i%100==0&&i%400!=0){
		cout<<"365"<<endl;
	}else if(i%400==0){
		cout<<"366"<<endl;
	}



}
