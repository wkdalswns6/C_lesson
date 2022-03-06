#include <stdio.h>

int main(){
    int num = 123456789;
    printf("%d, ", num / 100000000);
    printf("%d, ", num % 100000000 /10000000);
    printf("%d, ", num % 10000000 /1000000);
    printf("%d, ", num % 1000000 /100000);
    printf("%d, ", num % 100000 /10000);
    printf("%d, ", num % 10000 /1000);
    printf("%d, ", num % 1000 /100);
    printf("%d, ", num % 100 /10);
    printf("%d\n", num % 10);


}