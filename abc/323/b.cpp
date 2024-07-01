//2024/07/01
//
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<7;i++){
		cin>>s[i];
	}
	vector<string> tmp=s;
	sort(tmp.begin(),tmp.end());
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(tmp[j]==s[i]){
				cout<<i<<" ";

			}
		}
	}
	cout<<endl;
}
