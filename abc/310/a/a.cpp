#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *p,const void *q);

int main(void){
    int n,p,q,i;
    int d[101];
    scanf("%d %d %d",&n,&p,&q);
    for(i=0;i<n;i++){
        scanf("%d",&d[i]);
    }

    qsort(d,n,sizeof(d[0]),cmp);

    if(d[0]+q>p){
        printf("%d\n",p);
    }else{
        printf("%d\n",d[0]+q);
    }

    return 0;
}

int cmp(const void *p,const void *q){
  return *(int*)p-*((int*)q);
}
