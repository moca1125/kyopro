#include<iostream>
using namespace std;

int main(){
	int n,q;
	cin>>n>>q;
	vector<char> h(q);
	vector<int> t(q);
	for(int i=0;i<q;i++){
		cin>>h[i]>>t[i];
	}
	int ans=0;
	int left=1;
	int right=2;
	for(int i=0;i<q;i++){
			if(h[i]=='R'){//自分の順路に相手が居たら逆回り
					ans+=abs(right-t[i]);
			}else{
					ans+=abs(left-t[i]);
			}
	}
}
