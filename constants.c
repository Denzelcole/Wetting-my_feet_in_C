#include <stdio.h>
/**
 * constants are values that can't be modified
 */

int main(void)
{
        const int tim = 20; // the const is makes this code stick and we can't change the vairable later
        printf("%d\n", tim);
        tim = 60; // we get an error because of the const on line 8
        printf("%d\n", tim);

                return (0);
}