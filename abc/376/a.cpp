#include<iostream>
using namespace std;

int main(){
	int n,c;
	cin>>n>>c;
	int t;
	int ans=1;
	int morau;
	cin>>morau;
	for(int i=1;i<n;i++){
			cin>>t;
			if(c<=t-morau){
				ans++;
				morau=t;
			}
	}
	cout<<ans<<endl;
}
