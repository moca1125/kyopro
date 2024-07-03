//2024/07/03
//
#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<3;i++){
		if(s[i]=='o'){
			count++;
		}

	}
	cout<<700+100*count<<endl;

}
