#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    string text;
    int price,n;
    cin >> num;
    if(num==2) cin >> text;
    cin >>price>>n;

    if(num==1) cout << price*n<<endl;
    else cout << text<<"!\n"<<price*n<<endl;

}