//2024/07/01
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(auto &e:a){
		cin>>e;
	}
	sort(a.begin(),a.end());
	for(int i=0;i<n-1;i++){
		if(a[i]+1!=a[i+1]){
			cout<<a[i]+1<<endl;
			return 0;
		}

	}

}
