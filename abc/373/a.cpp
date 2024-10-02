#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
   vector<string> s(12);
   int num=0;
   for(int i=0;i<12;i++){
	   cin>>s[i];
   }

   for(int i=0;i<12;i++){
	   if(i+1==s[i].size()){
		   num++;
	   }
   }
   cout<<num<<endl;


}

