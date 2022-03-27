#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num < 0){
        printf("-\n");
    }

    if(num > 0){
        printf("+\n");
    }

    if (num == 0){
        printf("0\n");
    }
}