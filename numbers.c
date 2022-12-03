#include <stdio.h>
#include <math.h>
/**
 * C can also do some maths for us
 * include math.h
 */

int main(void)
{
        printf("%f\n", 7.5 * 4.3);     // %f is for float or double remember?
        printf("%d\n", 60 + 98);       // %d is for whole numbers
        printf("%f\n", pow(2, 6));     // this is just like 2 cube 6 or raise to the power of 6
        printf("%f\n", sqrt(16));      // Just like using square root
        printf("%f\n", ceil(56.976));  // giving us highest whole num
        printf("%f\n", floor(45.706)); // opposite of ceil highest and lowest
        return (0);
}