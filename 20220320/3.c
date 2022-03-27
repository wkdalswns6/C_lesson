#include <stdio.h>

int main(){
    int a =5, b =5;
    int result;

    result = a++ + --b;
    printf("a = %d, b = %d, result = %d\n", a, b, result);

    result = ++a - b--;
    printf("a = %d, b = %d, result = %d\n",a,b,result);

}