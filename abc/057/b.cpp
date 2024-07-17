//2024/07/17
//
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(m);
	vector<int> d(m);
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i];

	}
	for(int i=0;i<m;i++){
		cin>>c[i]>>d[i];
	}
	
	int distance;
	int ans;
	for(int j=0;j<n;j++){

	int min_result=distance=abs(a[j]-c[0])+abs(b[j]-d[0]);
	ans=1;
		for(int i=1;i<m;i++){
			distance=abs(a[j]-c[i])+abs(b[j]-d[i]);
			if(distance<min_result){
			min_result=distance;
			ans=i+1;
		}
		}
		cout<<ans<<endl;	
	}
}
