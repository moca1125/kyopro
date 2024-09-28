#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cin>>a>>b>>c;
	int i=b;
       while(1){		
		if(i==a){
			cout<<"No"<<endl;
			return 0;
		}
                if(i==c){
		     break;
		}
                if(i==23){
			i=0;
			continue;
		}
                
		i++;
		

	}
	cout<<"Yes"<<endl;

}
