//24/12/27
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> s(8);
    vector<string> ans1(8,"........");
    vector<string> ans2(8,"........");
    vector<string> ans(8,"........");
    for(int i=0;i<8;++i){
        cin>>s[i];
    }
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            //cout<<s[i][j];
            if(s[i][j]=='#'){
                ans1[i]="########";
                break;
            }
        }
        //cout<<endl;
    }
for(int j=0;j<8;j++){
    for(int i=0;i<8;i++){
            if(s[j][i]=='#'){
                for(int k=0;k<8;k++){
                ans2[j][k]='#';
                cout<<ans2[j][k];
                
                //ans[i][j]="########";
                }
                break;
           }
        }
        cout<<endl;
    }

    for(int j=0;j<8;j++){
        for(int i=0;i<8;i++){
            if(ans1[i][j]=='#'){
                ans[i][j]='#';
            }

            if(ans2[i][j]=='#'){
                ans[j][i]='#';
            }
        }
    }


    // for(int i=0;i<8;i++){
    //     for(int j=0;j<8;j++){
    //         cout<<ans2[i][j];
    //     }
    //     cout<<endl;
    // }



}