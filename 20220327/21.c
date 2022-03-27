#include <stdio.h>

int main(){
    int i = 0;
    while(1){
        printf("i:%d\n", i++);

        if(i == 10) 
            break;
    }
}