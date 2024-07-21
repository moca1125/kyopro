//2024/07/21
//
#include<iostream>
#include<string>
using namespace std;

int main(){
	int r,g,b;
	cin>>r>>g>>b;

	string c;
	cin>>c;

	if(c=="Red"){
		cout<<min(g,b)<<endl;
	}else if(c=="Green"){
		cout<<min(r,b)<<endl;
	}else{
		cout<<min(r,g)<<endl;
	}

}
