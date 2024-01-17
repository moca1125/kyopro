//abc317-a
#include<stdio.h>

int main(void){
    int n,h,x;
    int p[101];
    int q,r;
    int i,ans;
    scanf("%d %d %d",&n,&h,&x);
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
    }
    q=999+h;
    r=0;
    for(i=0;i<n;i++){
        ans=0;
        ans=h+p[i];
        if(x<=ans&&ans<=q){
            q=ans;
            r=i+1;
        }
    }
    printf("%d\n",r);
    return 0;
}