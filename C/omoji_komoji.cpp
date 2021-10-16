#include<stdio.h>

int main(void){
    char s[10000];
    int i;
    printf("大文字と小文字からなる文字列を入力してください。\n");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if('a'<=s[i]&&s[i]<='z'){
            s[i]-=('a'-'A');
        }
    }
    printf("\n\n\n");
    printf("%s",s);
    return 0;
}