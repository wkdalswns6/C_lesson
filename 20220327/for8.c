#include <stdio.h>

int main(){
    int i;
    for(i = 0; i < 10 && (i % 2 == 0); i++){
        printf("*\n");
        printf("i = %d\n",i);
    }
}