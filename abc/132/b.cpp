//2024/06/29
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> p(n);
	for(auto &e:p){
		cin>>e;
	}
	int ans=0;	
	for(int i=0;i<n-2;i++){
		vector<int> a(3);
		a[0]=p[i];
		a[1]=p[i+1];
		a[2]=p[i+2];	
		vector<int> b=a;
		sort(a.begin(),a.end());
		if(a[1]==b[1]){

			ans++;
		}

		

	}
	cout<<ans<<endl;

}
