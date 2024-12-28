#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<vector<int>> grid(n,vector<int>(n, 0));
    vector<int> x(m);
    vector<int> y(m);
    vector<char> c(m);
    for(int i=0;i<m;i++){
        cin>>x[i]>>y[i]>>c[i];
    }

    for(int k=0;k<m;k++){
    for(int i=0;i<x[k];i++){
        for(int j=0;j<y[k];j++){
            grid[j][i]=1;
        }
    }
    }


    // for(int k=0;k<m;k++){
    //     if(c[k]=='B'){
    //         grid[x[k]-1][y[k]-1]=1;
    //     }else{
    //         grid[x[k]-1][y[k]-1]=0;
    //     }
            
    // }
    int num=0;
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(grid[j][i]==1){
                num++;
            }
        }
    }

    if(n*n<num){
        cout<<"No"<<endl;
        return 0;
    }

    for(int k=0;k<m;k++){
        if(grid[x[k]-1][y[k]-1]==1 && c[k]=='W'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    
        cout<<"Yes"<<endl;
}