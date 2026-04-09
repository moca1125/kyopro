#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   int h,w,x,y;
   cin>>h>>w>>x>>y;
   vector<vector<char>> s(h, vector<char>(w));
    vector<vector<int>> count(h, vector<int>(w,0));
   string t;
   for(int j=0;j<h;j++){
    for(int i=0;i<w;i++){
        cin>>s[j][i];
    }
   }
   cin>>t;
    int tuka=0;
    x--;
    y--;
    if(s[x][y]=='@'){
        count[x][y]=1;
    }
   for(int k=0;k<t.size();k++){
    
        if(t[k]=='U'&& 0<=(x-1)){
            if((s[x-1][y]=='.' || s[x-1][y]=='@')){
                
                x--;
                if(s[x][y]=='@'){
                    count[x][y]=1;
                }
            }    
        }else if(t[k]=='D' && x+1<w){
            if((s[x+1][y]=='.' || s[x+1][y]=='@')){
                
                x++;
                if(s[x][y]=='@'){
                    count[x][y]=1;
                }
            }
        }else if(t[k]=='L' && 0<=(y-1)){
            if((s[x][y-1]=='.' || s[x][y-1]=='@')){
               
                y--;
                if(s[x][y]=='@'){
                    count[x][y]=1;
                }
            }
        }else if(t[k]=='R' && y+1<h){
            if((s[x][y+1]=='.' || s[x][y+1]=='@')){
                
                y++;
                if(s[x][y]=='@'){
                    count[x][y]=1;
                }
            }
        }
         cout<<x<<y<<s[x][y]<<endl;
   }
    for(int j=0;j<h;j++){
        for(int i=0;i<w;i++){
            cout<<count[j][i];
            if(count[j][i]==1){
                tuka++;
            }
        }
        cout<<endl;
    }

   cout<<x+1<<" "<<y+1<<" "<<tuka<<endl;
   return 0;
}