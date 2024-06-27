//2024/06/27
//自力AC
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	vector<int> ans(3);
	ans[0]=a+a-1;
	ans[1]=b+b-1;
	ans[2]=a+b;
	//int num=max(ans.begin(),ans.end());
	int num=*max_element(ans.begin(), ans.end());
	cout<<num<<endl;
}
