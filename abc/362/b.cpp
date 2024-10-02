#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int xa,ya,xb,yb,xc,yc;
	cin>>xa>>ya>>xb>>yb>>xc>>yc;
	int a,b,c;
	a=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
	b=(xb-xc)*(xb-xc)+(yb-yc)*(yb-yc);
	c=(xc-xa)*(xc-xa)+(yc-ya)*(yc-ya);
	int a2,b2,c2;
	a2=b+c-a;
	b2=a+c-b;
	c2=a+b-c;
	if(a2==0||b2==0||c2==0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}



}	
