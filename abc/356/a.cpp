//2024/07/18
//
#include<iostream>
using namespace std;

int mian(){
	int n,l,r;
	cin>>n>>l>>r;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		a[i]=i+1;
	}
	int tmp;
	for(int i=0;i<n;i++){
		if(i+1==l){
			tmp=a[i];
		}
		if(i+1==r){
			a[l-1]=a[i];
			a[i]=tmp;
		}
		cout<<a[i]<<" ";
		
	}
	cout<<endl;


}
