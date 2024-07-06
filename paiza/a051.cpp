//2024/07/06
//
#include<iostream>
#include<vector>
using namespace std;

const int dx[3]={-1,0,1};
const int dy[3]={1,1,1};

int main(){
	int h,w;
	cin>>h>>w;
	vector<vector<int>> s(h, vector<int>(w));	
	for(int j=0;j<h;j++){
		for(int i=0;i<w;i++){
			cin>>s[j][i];
		}
	}

	vector<vector<int>> dp(h,vector<int>(w,0));

	for(int i=0;i<w;i++){
		dp[h-1][i]=s[h-1][i];
	}

	for(int j=h-1;0<=j;j--){
		for(int i=0;i<w;i++){
			int max_next=0;
			for(int num=0;num<3;num++){
				int nx=i+dx[num];
				int ny=j+dy[num];
				if(nx<w&&ny<h){
					max_next=max(max_next,dp[ny][nx]);
				}

			}
			dp[j][i]=s[j][i]+max_next;
		}
	}


	int ans=0;
	for(int i=0;i<w;i++){
		ans=max(ans,dp[0][i]);
	}
	cout<<ans<<endl;


}
