#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];

	}
	vector<int> b(k);
	int num=0;
	for(int j=n-k;j<n;j++){
		b[num]=a[j];
		num++;
	}
	for(int i=0;i<k;i++){
		cout<<b[i]<<" ";

	}
	for(int i=0;i<n-k;i++){
		cout<<a[i]<<" ";
	}
	
	cout<<endl;


}
