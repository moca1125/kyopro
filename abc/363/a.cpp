//2024/07/20
//
#include<iostream>
using namespace std;

int main(){
	int r;
	cin>>r;
	if(r<=99){
		cout<<100-r<<endl;
	}else if(r<=199&&100<=r){
		cout<<200-r<<endl;

	}else if(r<=299&&200<=r){
		cout<<300-r<<endl;
	}

}
