#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    if(N % 2 == 0){
        printf("Even\n");
        if(N % 3 == 0){
            printf("multiple of 6\n");
        }
    }
    else{
        printf("Odd\n");
        if(N % 3 == 0){
            printf("multiple of 3\n");
        }
    }
    
}