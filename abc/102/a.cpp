//2024/07/01
//
#include<iostream>
using namespace std;

int main(){
	long long int n;
	cin>>n;
	for(long long int i=n;i<=1000000000000000000;i++){
		if(i%2==0&&i%n==0){
			cout<<i<<endl;
			return 0;
		}
	}

}
/**
 
Nが偶数の時答えはN．Nが奇数の時答えは2N

 * /
