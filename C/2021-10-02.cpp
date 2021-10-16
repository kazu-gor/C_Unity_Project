#include<stdio.h>

int xyzwtententen(int wra,int wru,int *syo,int *am);

int main(void){
    int a=40,b=7,c=0,d=0;

    xyzwtententen(a,b,&c,&d);
    printf("%d  %d",c,d);
}

int xyzwtententen(int wra,int wru,int *syo,int *am){
    *syo=wra/wru;
    *am=wra%wru;
    if(wru==0||wra<=0||wru<=0){
        return 0;
    }else{
        return 1;
    }
}