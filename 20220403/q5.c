#include <stdio.h>

int main(){
    int i, j;
    int N;

    scanf("%d", &N);

    for(i=0; i < N; i++){
        for(j=0;j  <= i;j++){
            printf("*");

        }
        printf("\n");
    }
    for(i=0; i < N-1; i++){
        for(j=0; j < N-1-i;j++){
            printf("*");
        }
        printf("\n");
    }
}