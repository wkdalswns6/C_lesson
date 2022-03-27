#include <stdio.h>

int main()
{
    int select;
    int a, b;

    printf(" 1. add\n");
    printf(" 2. sub\n");
    printf(" 3. mult\n");
    printf(" 4. div\n");
    scanf("%d", &select);

    printf("input 2 number:");
    scanf("%d%d", &a, &b);

    if(select == 1){
        printf("%d\n", a + b);
    } else if (select == 2){
        printf("%d\n", a - b);
    } else if(select == 3){
        printf("%d\n", a * b);
    }else if (select == 4){
        printf("%d\n", a / b);
    }
}