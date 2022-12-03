#include <stdio.h>
#include <stdlib.h>
/**
 * Building A simple calc
 */

int main(void)
{
        double num1;
        double num2;
        printf("Put first number: ");
        scanf("%lf", &num1);
        printf("Put second number: ");
        scanf("%lf", &num2);

        printf("Solution: %lf\n", num1 + num2);
        return (0);
}