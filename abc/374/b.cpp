#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	string s,t;
	cin>>s>>t;
	int num_s=s.size();
	int num_t=t.size();
	int num_big=max(num_s,num_t);
	if(s==t){
			cout<<"0"<<endl;
	}else{
			for(int i=0;i<num_big;i++){
					if(s[i]!=t[i]){
							cout<<i+1<<endl;
							return 0;
					}

			}
	}

}
