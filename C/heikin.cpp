#include<stdio.h>

int main(void){
    float x[100],g=0.0,h;
    int i;
    for(i=0;i<100;i++){
        scanf("%f",&x[i]);
        if(x[i]==0){
            break;
        }
        g+=x[i];
    }
    h=g/i;
    printf("%f",h);
    return 0;
}