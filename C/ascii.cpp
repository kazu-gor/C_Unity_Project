#include<stdio.h>

int main(void){
    char s[100];
    int i;
    for(i=32;i<=126;i++){
        printf("%x  %c\n",i,i);
    }
    return 0;
}