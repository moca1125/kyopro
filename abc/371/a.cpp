#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
        vector<char> s(3);
	for(int i=0;i<3;i++){
		cin>>s[i];
	}
	vector<int> ans(3);
	int num=0;
	if(s[0]=='>'){
		ans[0]++;
		ans[1]--;
	}else{
		ans[1]++;
		ans[0]--;
	}if(s[1]=='>'){
		ans[0]++;
		ans[2]--;
	}else{
		
		ans[0]--;
		ans[2]++;
	}
	
	if(s[2]=='>'){

		ans[1]++;
		ans[2]--;
	}else{

		ans[1]--;
		ans[2]++;
	}

        vector<int> tmp=ans;
	sort(tmp.begin(),tmp.end());
	for(int i=0;i<3;i++){
		if(tmp[1]==ans[i]){
			if(i==0){
				cout<<"A"<<endl;
			}else if(i==1){
				cout<<"B"<<endl;
			}else{
				cout<<"C"<<endl;
			}
		}
	}

}
