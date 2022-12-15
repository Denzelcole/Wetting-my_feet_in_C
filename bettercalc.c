#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        double man1;
        double man2;
        char on;

        printf("Type a number: ");
        scanf("%lf", &man1);
        printf("Type an operator: ");
        scanf(" %c", &on);
        printf("Type a number: ");
        scanf("%lf", &man2);

        if (on == '+')
        {
                printf("%f\n", man1 + man2);
        }
        else if (on == '-')
        {
                printf("%f\n", man1 - man2);
        }
        else if (on == '/')
        {
                printf("%f\n", man1 / man2);
        }
        else if (on == '*')
        {
                printf("%f\n", man1 * man2);
        }
        else
        {
                printf("Invalid operator typed!\n"); // this will print invalid operator if you don't enter a valid operator
        }

        return (0);
}