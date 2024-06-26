#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> s(5);
	int k;
	for(int i=0;i<5;i++){
		cin>>s[i];
	}
	cin>>k;
	bool check=true;
	for(int j=0;j<5;j++){
		
		for(int i=j+1;i<5;i++){
			if(s[i]-s[j]<=k){
			}else{
				check=false;
				break;
			}
		}
		if(!check){
			break;
		}
	}
	if(check){
		cout<<"Yay!"<<endl;
	}else{
		cout<<":("<<endl;
	}
}
