#include <stdio.h>

int main(){
    char c;

    scanf("%c", &c);

    if('a' <= c && c <= 'z'){
        printf("small letter\n");

    }
    else if('A' <= c && c <= 'Z'){
        printf("capital letter\n");
    }
    else if('0' <= c && c <= '9'){
        printf("number\n");
    }
    else{
        printf("특수문자");
    }
}