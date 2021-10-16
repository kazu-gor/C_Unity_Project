#include<stdio.h>
#include<ctype.h>

int main(void){

    char m[10000];
    int i;

    printf("文字列を入力してください。\n");
    scanf("%s",m);
    for(i=0;m[i]!='\0';i++){
        m[i]=toupper(m[i]);
    }
    printf("\n\n\n%s",m);
    return 0;
}