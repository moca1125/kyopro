#include<iostream>
using namespace std;

int main(){
	int n,t,a;
	cin>>n>>t>>a;
	int dif=n-(t+a);
	int big,small;
	big=max(t,a);
	small=min(t,a);
	if(big>small+dif){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}

}
