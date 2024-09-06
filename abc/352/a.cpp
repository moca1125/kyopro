//2024/08/07
//
#include<iostream>
using namespace std;

int main(){
	int n,x,y,z;
	cin>>n>>x>>y>>z;
	if(x<=y){
	for(int i=x;i<=y;i++){
		if(i==z){
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	}else{
		for(int i=x;y<=i;i--){
			if(i==z){
				cout<<"Yes"<<endl;
				return 0;
			}
		}

	}
	cout<<"No"<<endl;


}
