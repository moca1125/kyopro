
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
#include<unordered_set>//sortはしない
#include<map>
using namespace std;

//回文判定
bool judge(const string &str){
	int n=str.size();
for(int i=0;i<n/2;++i){
		if(str[i]!=str[n-i-1]){
		return	false;
		}
	}
return true;
}

void backtrack(string &s,int k,unordered_set<string> &result,string &current,vector<bool> &used,unordered_map<string,bool> &memo){
	if(current.size()==s.size()){
		result.insert(current);
		return;
	}
	

    if (memo.find(current) != memo.end()) {
        return;
    }
    memo[current] = true;

    for (int i = 0; i < s.size(); ++i) {
        if (used[i]) continue;
        if (i > 0 && s[i] == s[i - 1] && !used[i - 1]) continue;

        current.push_back(s[i]);
        if (current.size() >= k && judge(current.substr(current.size() - k, k))) {
            current.pop_back();
            continue;
        }

        used[i] = true;
        backtrack(s, k, result, current, used, memo);
        used[i] = false;
        current.pop_back();
	}
}
int count(int n,int k,string s){
	unordered_set<string> que;
	sort(s.begin(),s.end());

	string current;
	vector<bool> used(s.size(),false);
	unordered_map<string,bool> memo;
	backtrack(s,k,que,current,used,memo);
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
