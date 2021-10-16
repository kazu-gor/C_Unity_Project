#include<stdio.h>
#include<string.h>

char kanji[2][5][524] = {
        {"海星","心太","賽子","贔屓","熊猫"},
        {"齷齪","饂飩","達磨","孑孑","酸漿"}
    };
    char yomi[2][5][524] = {
        {"ひとで","ところてん","さいころ","ひいき","ぱんだ"},
        {"あくせく","うどん","だるま","ぼうふら","ほおずき"}
    };

int main(void){

    char kaitou[524288];
    int i,n;
    int kantou=0;

    printf("難易度\n   簡単 : 1\n   難しい : 2\n");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        printf("問%d:「%s」は何と読むのかな〜 まーできないと思うけどな〜  でっきるっかな〜\n",i+1,kanji[n-1][i]);
        scanf("%s",kaitou);
        if(strcmp(kaitou,yomi[n-1][i])==0){
            printf("正解！！スゴイネ〜。まー当然だよね〜\n\n");
            kantou++;
        }else{
            printf("まちがい！！  ざーんねーんでーしたー  あれ〜できないのかな〜  ま、しょうがないよねー\n正解は「%s」だよ〜\n\n",yomi[n-1][i]);
        }
    }
    if(n==1){
        printf("終了ー。でっきたっかな〜  ま、簡単だったから全問正解だよね〜\n");
    }else{
        printf("終了ー。でっきたっかな〜  ちょっと難しかったけど、まーできたよね〜\n");
    }
    printf("正答数:%d   正解率:%.0f％  \n",kantou,(float)kantou/5.0*100);
    if(kantou<4){
        printf("あれ〜できなかったのかな〜  また挑戦してね。\n");
    }else{
        printf("すごいね〜  また挑戦してね。\n");
    }
    return 0;
}