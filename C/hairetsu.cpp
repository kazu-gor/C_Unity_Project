#include<stdio.h>

int main(void){
    float tensu[5][3]={{100,90,87},{46,73,32},{100,100,100},{53,27,99},{99,95,98}},g[5]={0,0,0,0,0},h[5],kh[3],kg[3]={0,0,0};
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<3;j++){
            printf("%f ",tensu[i][j]);
            g[i]+=tensu[i][j];
        }
        printf("\n");
        h[i]=g[i]/3;
    }
    for(i=0;i<5;i++){
        printf("%f\n",h[i]);
    }
    for(j=0;j<3;j++){
        for(i=0;i<5;i++){
            kg[j]+=tensu[i][j];
        }
        kh[j]=kg[j]/5;
        printf("%f\n",kg[j]);
    }
}