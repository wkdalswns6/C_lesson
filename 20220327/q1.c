#include <stdio.h>

int main(){
    int sum=0;
    char c;

    while(1){
        scanf("%c", &c);
        getchar();

        if(!('0' <= c && c <= '9'))break;
        sum += c-'0';

    }
    printf("sum: %d\n", sum);
}