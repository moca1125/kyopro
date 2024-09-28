#include<iostream>
#include<set>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	set<int>st;
	int num=0;
	for(int i=-200;i<200;i++){
		if(b-a==a-i || a-i==i-b || i-b==b-a){
		st.insert(i);		
	}

	}
	for(int i=0;i<st.size();i++){
		num++;
	}
	cout<<num<<endl;

}
