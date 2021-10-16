#include<stdio.h>

int main(void){
    char c[1000];
    int i,j;
    printf("文字列を入力してください。\n");
    scanf("%s",c);
    for(i=0;c[i]!='\0'&&c[i]!='c';i++){}
    for(j=i;c[j]!='\0';j++){
        printf("%c",c[j]);
    }
}