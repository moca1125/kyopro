//2024/06/28
//自力AC
#include<iostream>
#include<vector>
using namespace std;

int main(){
	int h,w;
	cin>>h>>w;
	vector<vector<int>> vv(h, vector<int>(w));
	int hh,ww;
	cin>>hh>>ww;
	int H=hh,W=ww;
	bool check1=false;
	for(int j=0;j<h;j++){
		check1=false;
			if(0<hh){
				check1=true;
		for(int i=0;i<w;i++){
				vv[j][i]=1;
			}
		if(check1){

				hh--;
		}
			}
	}
for(int j=0;j<w;j++){
	bool check2=false;
			if(0<ww){
				check2=true;
		for(int i=0;i<h;i++){
			
				vv[i][j]=1;
				
			}
		if(check2){
			ww--;
		}
			}
}
	int ans=0;
	for(int j=0;j<h;j++){
		for(int i=0;i<w;i++){
			if(vv[j][i]==0){
				ans++;
			}
		}
	}
	cout<<ans<<endl;
	
}
