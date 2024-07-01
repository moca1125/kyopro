//2024/07/01
//
#include<iostream>
using namespace std;

int main(){
	int k;
	cin>>k;
	int ans=0;
	for(int j=1;j<=k-1;j++){
		for(int i=j+1;i<=k;i++){
			if(i%2==0&&j%2!=0){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
}
