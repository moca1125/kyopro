#include<stdio.h>

int main(void){
    int n,i;
    int x[101];
    int y[101];
    int X,Y;
    scanf("%d",&n);
    X=0,Y=0;
    for(i=0;i<n;i++){
        scanf("%d %d",&x[i],&y[i]);
        X+=x[i];
        Y+=y[i];
    }

    if(X>Y){
        printf("Takahashi\n");
    }else if(X==Y){
        printf("Draw\n");
    }
    else{
        printf("Aoki\n");
    }

    return 0;
}