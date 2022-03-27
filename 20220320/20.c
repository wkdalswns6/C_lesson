#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    switch (N % 2)
    {
    case 0:
        printf("Even\n");
        break;
    
    default:
        printf("Odd\n");
        break;
    }
}