#include <stdio.h>
#include <stdlib.h>
/**
 * This is an array of numbers
 */

int main(void)
{
        int sweetNumbers[] = {20, 5, 60, 70, 68, 90};
        sweetNumbers[1] = 50;
        printf("%d\n", sweetNumbers[1]);
        return (0);
}