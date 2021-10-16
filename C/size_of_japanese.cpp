#include <stdio.h>

int main(void){
    printf("文字なし: %ld\n", sizeof(""));
    printf("h: %ld\n", sizeof("h"));
    printf("he: %ld\n", sizeof("he"));
    printf("hel: %ld\n", sizeof("hel"));
    printf("hell: %ld\n", sizeof("hell"));
    printf("hello: %ld\n", sizeof("hello"));
    printf("\n");

    printf("文字なし: %ld\n", sizeof(""));
    printf("H: %ld\n", sizeof("H"));
    printf("HE: %ld\n", sizeof("HE"));
    printf("HEL: %ld\n", sizeof("HEL"));
    printf("HELL: %ld\n", sizeof("HELL"));
    printf("HELLO: %ld\n", sizeof("HELLO"));
    printf("\n");

    printf("文字なし: %ld\n", sizeof(""));
    printf("こ: %ld\n", sizeof("こ"));
    printf("こん: %ld\n", sizeof("こん"));
    printf("こんに: %ld\n", sizeof("こんに"));
    printf("こんにち: %ld\n", sizeof("こんにち"));
    printf("こんにちは: %ld\n", sizeof("こんにちは"));
    printf("\n");
}