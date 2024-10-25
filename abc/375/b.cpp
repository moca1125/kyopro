#include<iostream>
#include<vector>
#include<math.h>
#include<stdio.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> x(n);
	vector<int> y(n);
	double ans=0;
	for(int i=0;i<n;i++){
			cin>>x[i]>>y[i];
	}
	ans+=hypot(0-x[0],0-y[0]);
	for(int i=1;i<n;i++){
			ans+=hypot(x[i-1]-x[i],y[i-1]-y[i]);
	}
	ans+=hypot(x[n-1]-0,y[n-1]-0);
	printf("%.10f\n",ans);

}
