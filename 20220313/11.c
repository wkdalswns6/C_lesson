#include <stdio.h>

int main()
{
    char select;
    int a, b;

    printf("+ -> add\n");
    printf("- -> sub\n");
    printf("* -> mult\n");
    printf("/ -> div\n");
    scanf("%c", &select);

    printf("input 2 number:");
    scanf("%d%d", &a, &b);

    if(select == '+'){
        printf("%d\n", a + b);
    } else if (select == '-'){
        printf("%d\n", a - b);
    } else if(select == '*'){
        printf("%d\n", a * b);
    }else if (select == '/'){
        printf("%d\n", a / b);
    }
}