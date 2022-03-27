#include <stdio.h>

int main()
{
    char select;
    int a, b;

    printf("input 2 number:");
    scanf("%d%d", &a, &b);
    getchar();
    // char c;
    // c = getchar(); // scanf("%c", &c);

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

    // printf("c is %c\n", c);
}
