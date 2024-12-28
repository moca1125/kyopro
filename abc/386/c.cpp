#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int k;
    string s,t;
    cin>>k>>s>>t;
    int len_s=s.size();
    int len_t=t.size();
    int len=max(len_s,len_t);
    bool flag1=true;
    bool flag2=true;
    bool flag3=true;
    bool flag=true;

    if(abs(len_s-len_t)>1){
        cout<<"No"<<endl;
        return 0;
    }

    for(int i=0;i<len;i++){
        char si=(i<len_s) ? s[i]:'\0';
        char ti=(i<len_t) ? t[i]:'\0';
        if(si!=ti){
            
            for(int j=i+1;j<len;j++){
                char sj=(j<len_s) ? s[j]:'\0';
                char tj=(j<len_t) ? t[j]:'\0';
                if(sj!=tj){
                    flag3=false;
                    flag=false;
                }
                if(j>0 && sj!=t[j-1]){
                    flag2=false;
                }
                if(j>0 && s[j-1]!=tj){
                    flag1=false;
                }

                if(!flag1 && !flag2 && !flag3){
                    cout<<"No"<<endl;
                    return 0;
                }

                // if(!flag1 || !flag2 || !flag3){
                //     flag=false;
                //     break;
                // }
            }
                break;
            }
        }

    if(flag1==true || flag2==true ||flag3==true){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
    
    return 0;
}