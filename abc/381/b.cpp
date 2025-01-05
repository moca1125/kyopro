#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    bool flag1=false;
    bool flag2=false;
    bool flag3=false;
    int len=s.size();
    int k;
    vector<int> count(26,0);
    for(int m=0;m<len;m++){
        count[s[m]-'a']++;
    }
    if(len%2==0){
        k=len/2;
                for(int j=1;j<len;j+=2){
                    if(s[j-1]!=s[j]){
                        cout<<"No"<<endl;
                        //cout<<"hhh"<<endl;
                        return 0;
                    }else{
                        for(int i=0;i<26;i++){
                            //cout<<count[i]<<endl;
                            if(count[i]==0 || count[i]==2){
                                
                            }else{
                                cout<<"No"<<endl;
                                return 0;
                            }
                        }
                    } 
                }
    }else{
        cout<<"No"<<endl;
        return 0;
    }

    cout<<"Yes"<<endl;
    
}