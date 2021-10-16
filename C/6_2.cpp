#include<stdio.h>

int main(void){

    char s[1800000];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        printf("%c",s[i]);
    }
    printf("%d",i);
}