#include <stdio.h>

int main(){
    int i;

    for(i = 0; ;i++){
        printf("i: %d\n", i);

        if(i == 10){
            break;
        }
    }
}