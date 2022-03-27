#include <stdio.h>

int main()
{
    char select;
    int a, b;

    printf("input 2 number:");
    scanf("%d%d", &a, &b);

    printf("+ -> add\n");
    printf("- -> sub\n");
    printf("* -> mult\n");
    printf("/ -> div\n");
    scanf("%c", &select);

    if (select == '+')
    {
        printf("%d\n", a + b);
    }
    else if (select == '-')
    {
        printf("%d\n", a - b);
    }
    else if (select == '*')
    {
        printf("%d\n", a * b);
    }
    else if (select == '/')
    {
        printf("%d\n", a / b);
    }
    else {
        printf("잘못된 값 입력됨\n");
    }
}
