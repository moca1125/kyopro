#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_set>//sortはしない
using namespace std;

//回文判定
bool judge(string &str){
	int n=str.size();
for(int i=0;i<n/2;++i){
		if(str[i]!=str[n-i-1]){
		return	false;
		}
	}
return true;
}

int count(int n,int k,string s){
	unordered_set<string> que;
	string sort_s=s;
	sort(sort_s.begin(),sort_s.end());

	do{
		bool check=true;
		for(int i=0;i<sort_s.size()-k+1;++i){
			string substr=sort_s.substr(i,k);
		if(judge(substr)){
			check=false;
			break;
		}	
		}
	if(check){
		que.insert(sort_s);
	}	
	}
	while(next_permutation(sort_s.begin(),sort_s.end()));
	return que.size();
}
int main(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;

	int ans=count(n,k,s);	
	cout<<ans<<endl;

}
