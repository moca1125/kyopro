//2024/07/01
//
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> x(5*n);
	for(auto &e:x){
		cin>>e;
	}
	for(int i=0;i<n;i++){
		int Max=*max_element(x.begin(),x.end());
		auto newEnd=find(x.begin(),x.end(),Max);
		if(newEnd!=x.end()){
		x.erase(newEnd);
		}
	}
	for(int i=0;i<n;i++){
		int Min=*min_element(x.begin(),x.end());
		auto newEnd=find(x.begin(),x.end(),Min);
		if(newEnd!=x.end()){
		x.erase(newEnd);
		}
	}
	double ans=0;
	for(int i=0;i<3*n;i++){
		ans+=x[i];

	}
	cout<<ans/3/n<<endl;
}
