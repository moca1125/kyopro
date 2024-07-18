//2024/07/18
//
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,l,r;
	cin>>n>>l>>r;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	for(int j=r;j>=l;j--){
		a[n-j-1]=j;
	}	
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


}
