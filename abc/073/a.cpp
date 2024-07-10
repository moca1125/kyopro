//2024/07/10
//
#include<iostream>
#include<string>
using namespace std;

int main(){
	string n;
	cin>>n;
	for(int i=0;i<2;i++){
		if(n[i]=='9'){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;

}
