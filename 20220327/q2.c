#include <stdio.h>

int main(){
    int i, sum = 0;
    char c;

    for(;  ;){
        scanf("%c",&c);
        getchar();

        if(!('0' <= c && c <= '9'))break;
        sum += c-'0';
    }

    printf("sum %d\n",sum);
}