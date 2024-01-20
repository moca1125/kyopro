#include<stdio.h>
#include<string.h>

int main(void){
    char s[101];
    int i;
    scanf("%s",s);

    for(i=0;s[i];i++){
        if(s[i]=='a'||s[i]=='i'||s[i]=='u'||s[i]=='e'||s[i]=='o') ;
        else printf("%c",s[i]);
    }
    printf("\n");
    

    return 0;
}