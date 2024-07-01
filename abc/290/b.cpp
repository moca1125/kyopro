//2024/07/01
//自力AC
#include<iostream>
using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	int count=0;
	for(int i=0;i<n;i++){
		if(count<k&&s[i]=='o'){
			cout<<'o';
		}else{
			cout<<'x';
		}
		if(s[i]=='o'){
			count++;
		}
	}
	cout<<endl;


}
