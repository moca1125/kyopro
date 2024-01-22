#include<stdio.h>

int main(void){
    int n,i,num;
    char s[101];
    int na,nb,nc;
    scanf("%d",&n);
    scanf("%s",s);

    num=0,na=0,nb=0,nc=0;
    for(i=0;i<n;i++){
        if(s[i]=='A'){
            na++;
            num++;
            if(0<na&&0<nb&&0<nc){
                break;
            }

        }else if(s[i]=='B'){
            nb++;
            num++;
            if(0<na&&0<nb&&0<nc){
                break;
            }
        }else if(s[i]=='C'){
            nc++;
            num++;
            if(0<na&&0<nb&&0<nc){
                break;
            }
        }
    }

    printf("%d\n",num);

    return 0;
}