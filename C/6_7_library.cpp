#include<stdio.h>
#include<ctype.h>

int main(void){
    char s[100000];
    printf("文字列を入力してください。\n");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
        if(isalpha(s[i])!=0){
            printf("英字\n");
        }else if(isdigit(s[i])!=0){
            printf("数字\n");
        }else{
            printf("その他\n");
        }
    }
    return 0;
}