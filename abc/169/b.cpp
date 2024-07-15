//2024/07/15
//WA
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	long long int ans=1;
	vector<long long int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0){
			cout<<"0"<<endl;
			return 0;
		}
	}
	for(int i=0;i<n;i++){
		ans*=a[i];
		if(ans>1000000000000000000){

			cout<<"-1"<<endl;
			return 0;
		}
	}

	cout<<ans<<endl;


}
