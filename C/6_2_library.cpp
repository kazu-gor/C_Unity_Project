#include<stdio.h>
#include<string.h>

int main(void){
    char s[10000];
    printf("文字列を入力してください。\n");
    scanf("%s",s);
    printf("%lu",strlen(s));
}