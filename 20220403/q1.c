#include <stdio.h>

int main(){
    int i, j;
    int N;

    scanf("%d", &N);

    for(i=0; i< N; i++){
        for(j=0;j < -i + 5;j++)
            printf("*");
        printf("\n");
    }
}