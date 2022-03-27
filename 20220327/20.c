#include <stdio.h>

int main(){
    int i, number, sum=0;

    for(i = 0;i < 5;i++){
        printf("input number is:  ");
        scanf("%d", &number);

        if(number == 0){
            break;
        }

        sum += number;
    }

    printf("sum: %d\n", sum);
}