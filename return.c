#include <stdio.h>
#include <stdlib.h>

int square(int num);

int main()
{
        printf("Valhala: %d\n", square(50.0));
        return (0);
}

int square(int num) // can be a prototype
{
        return num * num;
}