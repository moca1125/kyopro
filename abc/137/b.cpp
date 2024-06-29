//2024/06/29
//
#include<iostream>
using namespace std;

int main(){
	int r,d,x;
	cin>>r>>d>>x;
	int ans=x;
	for(int i=1;i<=10;i++){
		ans=r*ans-d;
		cout<<ans<<endl;
	}
}
