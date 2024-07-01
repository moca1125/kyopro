//2024/07/01
//
#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	int ans1=a+b,ans2=a-b,ans3=a*b;
	int ans4=max(ans1,ans2);
	int ans=max(ans4,ans3);
	cout<<ans<<endl;
}
