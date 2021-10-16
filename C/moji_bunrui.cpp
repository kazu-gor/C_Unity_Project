#include<stdio.h>

int main(void){

    char s[10000];
    int i;

    printf("半角の文字列を入力してください。\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if('a'<=s[i]&&s[i]<='z'){
            printf("英字 ");
        }else if('0'<=s[i]&&s[i]<='9'){
            printf("数字 ");
        }else{
            printf("その他 ");
        }
    }
    return 0;
}