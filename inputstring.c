#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        char nam[40]; // we use an arry to declare char for string input
        printf("Watin be your full name?: \n");
        fgets(nam, 40, stdin);
        printf("Waow %s\n", nam);
        printf("Sweet name ohh\n");

        return (0);
}