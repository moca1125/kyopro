#include<stdio.h>

int main(void){
    int n;
    int c[38];
    int a[101][37];
    int x;
    int i,j,k;

    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&c[i]);
        for(j=0;j<c[i];j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&x);


    return 0;
}