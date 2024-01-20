#include<stdio.h>

int main(void){
    int n;
    int i,ans;
    int p[101],num,num2,dif;
    scanf("%d",&n);
    num=0;
    for(i=0;i<n;i++){
        scanf("%d",&p[i]);
        num++;
    }

    ans=0;
    num2=0;
    for(i=1;p[i];i++){
    if(p[i]+1<=p[0]){
        num2++;
    }else{
        dif=p[i]+1-p[0];
        if(ans<dif){
            ans=dif;
        }
    }
    }

    if(num==num2){
        printf("0\n");
    }else{
        printf("%d\n",ans);
    }



    return 0;
}