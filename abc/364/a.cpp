#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<string> s(n);
	for(int i=0;i<n;i++){
		cin>>s[i];

	}

	for(int i=0;i<n-1;i++){

		if(s[i]==s[i-1]&&s[i]=="sweet"){
			cout<<"No"<<endl;
			return 0;
			}
	}

	cout<<"Yes"<<endl;
}
