//2024/07/15
//
#include<iostream>
#include<string>
using namespace std;

int main(){

	string s,t;
	cin>>s>>t;
	string hozon;
	int count=0;
	int max=0;
	int min_num=t.size();
	for(int j=0;j<s.size()-min_num+1;++j){
		
	string tmp_s;
	count=0;
		for(int i=j;(i<j+min_num)&&(i<s.size());++i){
			tmp_s+=s[i];
			if(tmp_s.size()==min_num){
			if(tmp_s==t){
				cout<<"0"<<endl;
				return 0;
			}else{
				for(int k=0;k<min_num;k++){
					if(tmp_s[k]==t[k]){
						count++;
					}
					if(max<count){
						max=count;
						hozon=tmp_s;
					}
				}
			}
			}
		}
	}
	int ans=0;
	for(int i=0;i<min_num;i++){
		if(hozon[i]!=t[i]){
			ans++;
		}
	}
	cout<<ans<<endl;


}
