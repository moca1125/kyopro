#include<stdio.h>

int main(void){
    int m,i;
    int d[101];
    int comp,sum,sum1,sum2,x;
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&d[i]);
    }
    comp=0,sum=0;
    for(i=0;i<m;i++){
        sum+=d[i];
    }
    comp=(sum-1)/2;


    sum1=0,sum2=0,x=0;
    for(i=0;i<m;i++){
        sum2+=d[i];
        if(sum2>comp){
            x=i;
            sum1=sum2-d[i];
            break;
        }
    }
    printf("%d %d\n",x+1,comp-sum1+1);

    return 0;
}