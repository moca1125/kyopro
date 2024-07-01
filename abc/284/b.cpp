//2024/07/01
//自力AC
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		int ans=0;
		for(int j=0;j<a;j++){
			int num;
			cin>>num;
			if(num%2==1){
				ans++;
			}
		}
		cout<<ans<<endl;
	}
}

