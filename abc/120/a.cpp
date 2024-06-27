//2024/06/27
//
#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int ans=a*c;
	if(ans<=b){
		cout<<c<<endl;
	}else{
		for(int i=c;0<=i;i--){
			int tmp=i*a;
			if(tmp<=b){
				cout<<i<<endl;
				return 0;
			}
		}
	}
}
