#include <stdio.h>

int main(){
    int a=0, b=3, c=2;
    int res = b++ - --a + ++c;

    printf("%d, %d, %d, %d\n", a, b, c, res);
}