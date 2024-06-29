//2024/06/29
//自力AC
#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<char> a(3);
	for(auto &e:a){
		cin>>e;
	}
	for(int i=0;i<3;i++){
		if(a[i]=='1'){
			cout<<9;
		}else{
			cout<<1;
		}
	}
	cout<<endl;

}
