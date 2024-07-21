#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n,t,p;
	cin>>n>>t>>p;
	vector<int> l(n);
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	int count_zero=0;
	for(int i=0;i<n;i++){
		if(t<=l[i]){
			count_zero++;
		}
	}
	if(p<=count_zero){
		cout<<"0"<<endl;
		return 0;
	}
	bool check=false;
	int day=1;
	while(check==false){
		int count=0;
		for(int i=0;i<n;i++){
			l[i]++;
			if(t<=l[i]){
				count++;
			}
		}
		if(p<=count){
			check=true;
			break;
		}
		day++;
	}
	cout<<day<<endl;
}
